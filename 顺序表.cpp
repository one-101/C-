#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct crr  //�����ṹ��
{
	int len; //���峤�ȣ��±꣩
	int Siz;//�ݻ�
	int data[10];//����
};
int init(struct crr* s) //��ʼ������
{
	memset(s->data, 0, sizeof(int[10]));//��ʼ��
	s->Siz = 10;	//��ʼ���ݻ�
	s->len = 0;		//��ʼ���±�
	return 0;
}
int add(struct crr* s, int Val) //β�庯��
{
	if (s->Siz == 0)				//���˳����ݻ�
	{
		printf("������\n");
		return -1;
	}
	s->data[s->len++] = Val; //��ֵ�����ȼ�һ
	s->Siz--;				//�ݻ���һ

	return 0;
}
void prf(crr a)  //��ӡ����
{
	for (int i = 0; i < a.len; i++)
	{
		printf("%d\n", a.data[i]);
	}

}

int Dele(struct crr* s, int n)	//ɾ������
{
	if (s->len == 0)				//���˳�����
	{
		printf("���\n");
		return -1;
	}

	for (int i = (n - 1); i < s->len; i++)	//�ҵ������±�
	{
		s->data[n - 1] = s->data[n];//����һλ��ֵ����ǰһλ��ѭ��
	}
	s->data[s->len] = 0;	//�����һλ��0
	s->Siz++;				//�ݻ���һ
	s->len--;				//���ȼ�һ
	return 0;
}
int main()
{

	crr a;  //����˳��� a
	init(&a);//���ó�ʼ������
	add(&a, 100);
	add(&a, 500);
	add(&a, 300);
	prf(a);
	Dele(&a, 2);
	prf(a);
	return 0;
}