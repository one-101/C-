#include <stdio.h>
int isLower (char c){
	return 'a'<= c && c <= 'z'; //����һ���ַ�c �趨���С�� 
}
char getupper(char c){
	return c - 'a' + 'A'; // ��ȷ���ַ�ΪСд��ĸʱ������������ȥ'a',�õ�һ��ƫ�����ڼ�'A',�õ����д��ʽ 
}
int main(){
	char c;
	while(scanf("%c", &c)!= EOF){
		if(isLower(c)){
			c = getupper(c);//TODO
		}
		printf("%c\n",c);	//TODO
	}
	return 0;
}
