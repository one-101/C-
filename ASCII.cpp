#include <stdio.h>
int isLower (char c){
	return 'a'<= c && c <= 'z'; //定义一个字符c 设定其大小； 
}
char getupper(char c){
	return c - 'a' + 'A'; // 在确定字符为小写字母时，可以用它减去'a',得到一个偏移量在加'A',得到其大写形式 
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
