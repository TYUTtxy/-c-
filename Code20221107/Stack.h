#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

//typedef int STDataType;
//#define N 10
//typedef struct Stack
//{
//	STDataType a[N];
//	int top;
//}ST;

typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;

}ST;
void StackInit(ST* ps);
void StackDestroy(ST* ps);
void StackPush(ST* ps);
void StackPop(ST* ps);
int StackSize(ST* ps);
bool StackEmpty(ST* ps);
STDataType StackTop(ST* ps);
