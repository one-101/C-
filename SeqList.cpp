#define MAXN 1024;
#define DataType int;
#include<stdio.h>

struct SeqList  //声明结构体
{
	DataType data[MAXN]; //数组

	int length;//长度
}

DataType SeqListIndex(struct SeqList *sq ,int i)
{
	return sq->data[i];
}

