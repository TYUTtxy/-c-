#pragma once
#define N 100
#include<stdlib.h>
#include<stdio.h>
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int size;
	int cap;
	int capacity;
}SL;

void SLCheckCapacity(SL* ps);
void SLInit(SL* ps);
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);
void SLPrint(SL* ps);
void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);
int SLFind(SL* ps, SLDataType x);
void SLModify(SL* ps,int pos, SLDataType x);
void SLDestory(SL* ps);