#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include <stdbool.h>
#include <ctype.h>
#define MaxStrSize 256  //�����û���Ҫ�Լ������С
#define IDNO_LENGTH 6  //ID���� 

typedef struct {
	char ch[MaxStrSize]; //ch��һ��������256���ַ����ַ�����
	int length;
}SString; //����˳������

typedef struct {
	char str[50]; //������󳤶���Ϊ50
	int cnt;//���ʳ��ִ���
}Str;

int isdigitstr(char* str) {
	return (strspn(str, "0123456789") == strlen(str));
}

void counts(char fname[]) {
	FILE* fp;
	FILE* ft;
	char tmp[50];
	Str words[300]; //������������ 
	int num = 0;//ʵ�ʵ������� 
	int i, j, neww = 1;//neww��־λ���ж��Ƿ�Ϊ�µ��� 
	if ((fp = fopen(fname, "r")) == NULL) {
		printf("���ļ�ʧ��...\n");
		exit(0);
	}
	if ((ft = fopen("soft.txt", "a+")) == NULL) {
		printf("���ļ�ʧ��...\n");
		exit(0);
	}
	fp = fopen(fname, "r");
	ft = fopen("soft.txt", "a+");
	//fscanf���ļ��л�ȡ�����ַ��� 
	while (fscanf(fp, "%s", tmp) != EOF) {
		if (isdigitstr(tmp))continue;
		neww = 1;
		for (i = 0; i < num; i++) {
			//�ظ��ĵ��� 
			if (strcmp(tmp, words[i].str) == 0) {
				neww = 0;
				words[i].cnt++;
			}
		}
		if (neww) {
			// �����ַ���
			for (j = 0; tmp[j] != '\0'; j++) {
				words[num].str[j] = tmp[j];
			}
			//����ĩβ��ӽ����� 
			words[num].str[j] = '\0';
			// �µ�������+1 
			words[num++].cnt = 1;
		}
	}
	for (int i = 0; i < num - 1; i++) {
		for (int j = 0; j < num - 1 - i; j++) {
			if (stricmp(words[j].str, words[j + 1].str) < 0) {
				Str tmp = words[j];
				words[j] = words[j + 1];
				words[j + 1] = tmp;
			}
		}
	}
	for (i = num - 1; i >= 0; i--) {
		fprintf(ft, "%-10s %2d\n", words[i].str, words[i].cnt);
		printf("%-10s %2d\n", words[i].str, words[i].cnt);
	}
	fclose(fp);
	fclose(ft);
	return;
}

void count() {
	FILE* fp;
	FILE* ft;
	char fname[10];
	printf("�����ı��ļ�����");
	scanf("%s", &fname);
	int count = 0;
	char s[21];
	if ((ft = fopen("soft.txt", "a+")) == NULL) {
		printf("���ļ�ʧ��...\n");
		exit(0);
	}
	if ((fp = fopen(fname, "r")) == NULL) {
		printf("���ļ�ʧ��...\n");
		exit(0);
	}
	ft = fopen("soft.txt", "a+");
	fp = fopen(fname, "r");
	while (fscanf(fp, "%s", s) != EOF) {
		if (isdigitstr(s))continue;
		count++;
	}
	fprintf(ft, "%s�ļ���%d������,��ÿ�����ʳ��ִ������£�\n", fname, count);
	printf("%s�ļ���%d�����ʣ�ÿ�����ʳ��ִ������£�\n", fname, count);
	fclose(fp);
	fclose(ft);
	counts(fname);
}

int PartPosition(SString s1, SString s2, int k) {
	int i, j;
	i = k - 1;  //ɨ��s1���±꣬��Ϊc�������±��Ǵ�0��ʼ������������1
	j = 0;    //ɨ��s2�Ŀ�ʼ�±�
	while (i < s1.length && j < s2.length) {
		if (s1.ch[i] == s2.ch[j]) {
			i++;
			j++;  //����ʹ�±�������һ���ַ�λ��
		}
		else {
			i = i - j + 1;
			j = 0;
		}
	}
	if (j >= s2.length)
		return i - s2.length;
	else
		return -1;  //��ʾs1�в�����s2������-1
	//��ʾs1�в�����s2����������ʼλ��
}  //��������

void CreatTextFile() {
	FILE* fp;
	SString S;
	char fname[10], yn;
	printf("����Ҫ�������ļ����� ");
	scanf("%s", fname);
	fp = fopen(fname, "w");
	yn = 'n'; //���������־��ֵ
	while (yn == 'n' || yn == 'N') {
		printf("������һ���ı���");
		gets(S.ch); gets(S.ch);
		S.length = strlen(S.ch);
		fwrite(&S, S.length, 1, fp);
		fprintf(fp, "%c", 10);  //�����뻻��
		printf("����������y or n: ");
		yn = getchar();
	}
	fclose(fp);  //�ر��ļ�
	printf("�����ļ�������");
}

void SubStrInd(char fname[], SString T) {
	FILE* fp;
	SString S;  //��������������
	int i, j, k, l, m;
	int wz[20];
	if ((fp = fopen(fname, "r")) == NULL) {
		printf("���ļ�ʧ��...\n");
		exit(0);
	}
	fp = fopen(fname, "r");
	T.length = strlen(T.ch);
	l = 0;
	while (!feof(fp)) {
		memset(S.ch, '\0', 256);
		fgets(S.ch, 256, fp);
		S.length = strlen(S.ch);
		l++;
		k = 0;
		i = 0;
		while (k < S.length - 1) {
			j = PartPosition(S, T, k);
			if (j < 0)
				break;
			else {
				i++;
				wz[i] = j;
				k = j + T.length;
			}
		}
		if (i > 0) {
			printf("�кţ�%d , ������%d, λ�÷ֱ�Ϊ��", l, i);
			for (m = 1; m <= i; m++)
				printf("%4d", wz[m] + 1);
			printf("\n");
		}
	}
	fclose(fp);
}

void SubStrCount() {
	FILE* fp;
	SString S, T;  //��������������
	int i = 0, j, k;
	char fname[10];
	printf("�����ı��ļ�����");
	scanf("%s", &fname);
	if ((fp = fopen(fname, "r")) == NULL) {
		printf("���ļ�ʧ��...\n");
		exit(0);
	}
	fp = fopen(fname, "r");
	printf("����Ҫ�����붨λ�ĵ��ʣ�");
	scanf("%s", T.ch);
	T.length = strlen(T.ch);
	while (!feof(fp)) {        //ɨ�������ļ��ı�
		memset(S.ch, '\0', 256);
		fgets(S.ch, 100, fp);
		S.length = strlen(S.ch);
		k = 0;  //��ʼ����ʼ����λ��
		while (k < S.length - 1)  //������������S
		{
			j = PartPosition(S, T, k);
			if (j < 0)
				break;
			else {
				i++;  //���ʼ�������1
				k = j + T.length;  //������һ�ִ��ļ���
			}
		}
	}
	if (i == 0) {
		printf("��ѯʧ��\n");
	}
	else
		printf("\n����%s���ı��ļ�%s�й�����%d��\n", T.ch, fname, i);
	fclose(fp);
	SubStrInd(fname, T);
}  //ͳ�Ƶ��ʳ��ָ���

//�ж�ID�Ƿ���ȷ 
bool checkNo() {
	int n = 0, index;
	bool flag;
	flag = true;
	char s[100];
	scanf("%s", s);
	for (int i = 0; s[i] != NULL; i++) {
		n++;
	}  //ID���Ȳ��� 
	if (n != IDNO_LENGTH) {
		printf("ID �����Ϲ����������룺");
		return false;
	}
	for (index = 0; index < n; index++) {
		if (index < 2) {
			if (!(s[index] >= 65 && s[index] <= 90)) {
				flag = false;
				printf("ID �����Ϲ����������룺");
				return flag;
			}
		}  //��ĸ���� 
		else {
			if (!isdigit(s[index])) {
				flag = false;
				printf("ID �����Ϲ����������룺");
				return flag;
			}
		}  //���ֲ��� 
	}
}

int main(){
	printf("������ID�ţ�������д��ĸ��4λ���֣�:");
	do {
		if (checkNo())break;
	} while (1);
	int x;
	do {
		printf("\n1.�����ļ�\n");
		printf("2.����ͳ��\n");
		printf("3.���ʲ�ѯ����λ\n");
		printf("4.�˳�\n");

		printf("��ѡ��1--4��\n");
		scanf("%d", &x);
		switch (x) {
		case 1:CreatTextFile(); break;
		case 2:count(); break;
		case 3:SubStrCount(); break;
		case 4: return 0;
		default: printf("ѡ���������ѡ��\n");
		}
	} while (1);
