#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void SLInit(SL* ps) {
	assert(ps != NULL);

	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SLCheckCapacity(SL* ps)
{
	assert(ps != NULL);
	if (ps->capacity == ps->size)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL) {
			printf("realloc fall\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}

void SLPushBack(SL* ps, SLDataType x) {
	assert(ps != NULL);
	/*SLCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;*/

	SLInsert(ps, ps->size, x);
}

void SLPrint(SL* ps) {
	assert(ps != NULL);
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d", ps->a[i]);
	}
	printf("\n");

}

void SLDestory(SL* ps)
{
	assert(ps != NULL);
	if (ps -> a)
	{
		free(ps->a);
		ps->a = NULL;
		ps->capacity = 0;
		ps->size = 0;
	}
}

void SLPushFront(SL* ps, SLDataType x) {
	/*assert(ps != NULL);
	SLCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;*/
	SLInsert(ps, 0, x);
}

void SLpopBack(SL* ps) {
	assert(ps != NULL);
	/*if (ps->size == 0)
	{
		printf("SeqList is empty");
		return;
	}*/
	assert(ps->size > 0);
	ps->size--;
}

void SLpopFront(SL* ps) {
	assert(ps != NULL);
	assert(ps->size > 0);
	/*int begin = 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--;*/
	SLErase(ps, 0);
}

void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps != NULL);
	assert(pos >= 0 && pos <= ps->size);
	SLCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;

}


void SLErase(SL* ps, int pos) {
	assert(ps != NULL);
	assert(pos >= 0 && pos < ps->size);
	int begin = pos;
	while (begin < ps-> size - 1)
	{
		ps->a[begin] = ps->a[begin + 1];
		++begin;
	}
	ps->size--;
}

int SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; ++i)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SLModify(SL* ps, int pos,int x)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	ps->a[pos] = x;
}