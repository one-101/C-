#define MAXN 1024;
#define DataType int;
#include<stdio.h>

struct SeqList  //�����ṹ��
{
	DataType data[MAXN]; //����

	int length;//����
}

DataType SeqListIndex(struct SeqList *sq ,int i)
{
	return sq->data[i];
}

