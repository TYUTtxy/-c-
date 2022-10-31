#pragma once
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;//ÈÝÁ¿
}SL;
void SLInit(SL* ps);

void SLDestory(SL* ps);

void SLCheckCapacity(SL* ps);


void SLPushBack(SL* ps, SLDataType x);
void SLpopBack(SL* ps);
void SLPushFront(SL* ps, SLDataType x);
void SLpopFront(SL* ps);


void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);

int SLFind(SL* ps, SLDataType x);
void SLModify(SL* ps, int pos,int x);


void SLPrint(SL* ps);
