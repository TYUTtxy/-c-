#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include <stdbool.h>
#include <ctype.h>
#define MaxStrSize 256  //根据用户需要自己定义大小
#define IDNO_LENGTH 6  //ID长度 

typedef struct {
	char ch[MaxStrSize]; //ch是一个可容纳256个字符的字符数组
	int length;
}SString; //定义顺序串类型

typedef struct {
	char str[50]; //单词最大长度设为50
	int cnt;//单词出现次数
}Str;

int isdigitstr(char* str) {
	return (strspn(str, "0123456789") == strlen(str));
}

void counts(char fname[]) {
	FILE* fp;
	FILE* ft;
	char tmp[50];
	Str words[300]; //单词数量上限 
	int num = 0;//实际单词数量 
	int i, j, neww = 1;//neww标志位，判断是否为新单词 
	if ((fp = fopen(fname, "r")) == NULL) {
		printf("打开文件失败...\n");
		exit(0);
	}
	if ((ft = fopen("soft.txt", "a+")) == NULL) {
		printf("打开文件失败...\n");
		exit(0);
	}
	fp = fopen(fname, "r");
	ft = fopen("soft.txt", "a+");
	//fscanf从文件中获取单个字符串 
	while (fscanf(fp, "%s", tmp) != EOF) {
		if (isdigitstr(tmp))continue;
		neww = 1;
		for (i = 0; i < num; i++) {
			//重复的单词 
			if (strcmp(tmp, words[i].str) == 0) {
				neww = 0;
				words[i].cnt++;
			}
		}
		if (neww) {
			// 复制字符串
			for (j = 0; tmp[j] != '\0'; j++) {
				words[num].str[j] = tmp[j];
			}
			//单词末尾添加结束符 
			words[num].str[j] = '\0';
			// 新单词数量+1 
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
	printf("输入文本文件名：");
	scanf("%s", &fname);
	int count = 0;
	char s[21];
	if ((ft = fopen("soft.txt", "a+")) == NULL) {
		printf("打开文件失败...\n");
		exit(0);
	}
	if ((fp = fopen(fname, "r")) == NULL) {
		printf("打开文件失败...\n");
		exit(0);
	}
	ft = fopen("soft.txt", "a+");
	fp = fopen(fname, "r");
	while (fscanf(fp, "%s", s) != EOF) {
		if (isdigitstr(s))continue;
		count++;
	}
	fprintf(ft, "%s文件有%d个单词,，每个单词出现次数如下：\n", fname, count);
	printf("%s文件有%d个单词，每个单词出现次数如下：\n", fname, count);
	fclose(fp);
	fclose(ft);
	counts(fname);
}

int PartPosition(SString s1, SString s2, int k) {
	int i, j;
	i = k - 1;  //扫描s1的下标，因为c中数组下标是从0开始，串中序号相差1
	j = 0;    //扫描s2的开始下标
	while (i < s1.length && j < s2.length) {
		if (s1.ch[i] == s2.ch[j]) {
			i++;
			j++;  //继续使下标移向下一个字符位置
		}
		else {
			i = i - j + 1;
			j = 0;
		}
	}
	if (j >= s2.length)
		return i - s2.length;
	else
		return -1;  //表示s1中不存在s2，返回-1
	//表示s1中不存在s2，返回其起始位置
}  //函数结束

void CreatTextFile() {
	FILE* fp;
	SString S;
	char fname[10], yn;
	printf("输入要建立的文件名： ");
	scanf("%s", fname);
	fp = fopen(fname, "w");
	yn = 'n'; //输入结束标志初值
	while (yn == 'n' || yn == 'N') {
		printf("请输入一行文本：");
		gets(S.ch); gets(S.ch);
		S.length = strlen(S.ch);
		fwrite(&S, S.length, 1, fp);
		fprintf(fp, "%c", 10);  //是输入换行
		printf("结束输入吗？y or n: ");
		yn = getchar();
	}
	fclose(fp);  //关闭文件
	printf("建立文件结束！");
}

void SubStrInd(char fname[], SString T) {
	FILE* fp;
	SString S;  //定义两个串变量
	int i, j, k, l, m;
	int wz[20];
	if ((fp = fopen(fname, "r")) == NULL) {
		printf("打开文件失败...\n");
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
			printf("行号：%d , 次数：%d, 位置分别为：", l, i);
			for (m = 1; m <= i; m++)
				printf("%4d", wz[m] + 1);
			printf("\n");
		}
	}
	fclose(fp);
}

void SubStrCount() {
	FILE* fp;
	SString S, T;  //定义两个串变量
	int i = 0, j, k;
	char fname[10];
	printf("输入文本文件名：");
	scanf("%s", &fname);
	if ((fp = fopen(fname, "r")) == NULL) {
		printf("打开文件失败...\n");
		exit(0);
	}
	fp = fopen(fname, "r");
	printf("输入要计数与定位的单词：");
	scanf("%s", T.ch);
	T.length = strlen(T.ch);
	while (!feof(fp)) {        //扫描整个文件文本
		memset(S.ch, '\0', 256);
		fgets(S.ch, 100, fp);
		S.length = strlen(S.ch);
		k = 0;  //初始化开始检索位置
		while (k < S.length - 1)  //检索整个主串S
		{
			j = PartPosition(S, T, k);
			if (j < 0)
				break;
			else {
				i++;  //单词计数器加1
				k = j + T.length;  //继续下一字串的检索
			}
		}
	}
	if (i == 0) {
		printf("查询失败\n");
	}
	else
		printf("\n单词%s在文本文件%s中共出现%d次\n", T.ch, fname, i);
	fclose(fp);
	SubStrInd(fname, T);
}  //统计单词出现个数

//判断ID是否正确 
bool checkNo() {
	int n = 0, index;
	bool flag;
	flag = true;
	char s[100];
	scanf("%s", s);
	for (int i = 0; s[i] != NULL; i++) {
		n++;
	}  //ID长度不符 
	if (n != IDNO_LENGTH) {
		printf("ID 不符合规则，重新输入：");
		return false;
	}
	for (index = 0; index < n; index++) {
		if (index < 2) {
			if (!(s[index] >= 65 && s[index] <= 90)) {
				flag = false;
				printf("ID 不符合规则，重新输入：");
				return flag;
			}
		}  //字母不符 
		else {
			if (!isdigit(s[index])) {
				flag = false;
				printf("ID 不符合规则，重新输入：");
				return flag;
			}
		}  //数字不符 
	}
}

int main(){
	printf("请输入ID号（两个大写字母和4位数字）:");
	do {
		if (checkNo())break;
	} while (1);
	int x;
	do {
		printf("\n1.建立文件\n");
		printf("2.单词统计\n");
		printf("3.单词查询及定位\n");
		printf("4.退出\n");

		printf("请选择（1--4）\n");
		scanf("%d", &x);
		switch (x) {
		case 1:CreatTextFile(); break;
		case 2:count(); break;
		case 3:SubStrCount(); break;
		case 4: return 0;
		default: printf("选择错误，重新选择\n");
		}
	} while (1);
