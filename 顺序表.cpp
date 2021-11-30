#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct crr  //声明结构体
{
	int len; //定义长度（下标）
	int Siz;//容积
	int data[10];//数组
};
int init(struct crr* s) //初始化函数
{
	memset(s->data, 0, sizeof(int[10]));//初始化
	s->Siz = 10;	//初始化容积
	s->len = 0;		//初始化下标
	return 0;
}
int add(struct crr* s, int Val) //尾插函数
{
	if (s->Siz == 0)				//检查顺序表容积
	{
		printf("表已满\n");
		return -1;
	}
	s->data[s->len++] = Val; //赋值，长度加一
	s->Siz--;				//容积减一

	return 0;
}
void prf(crr a)  //打印函数
{
	for (int i = 0; i < a.len; i++)
	{
		printf("%d\n", a.data[i]);
	}

}

int Dele(struct crr* s, int n)	//删除函数
{
	if (s->len == 0)				//检查顺序表长度
	{
		printf("表空\n");
		return -1;
	}

	for (int i = (n - 1); i < s->len; i++)	//找到所需下标
	{
		s->data[n - 1] = s->data[n];//将后一位数值赋给前一位，循环
	}
	s->data[s->len] = 0;	//将最后一位置0
	s->Siz++;				//容积加一
	s->len--;				//长度减一
	return 0;
}
int main()
{

	crr a;  //定义顺序表 a
	init(&a);//调用初始化函数
	add(&a, 100);
	add(&a, 500);
	add(&a, 300);
	prf(a);
	Dele(&a, 2);
	prf(a);
	return 0;
}