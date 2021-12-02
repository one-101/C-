#include <stdio.h>
int main(){
	int a = 0;
	int b = 0;
	while(scanf("%d %d", &a , &b)!= EOF){
		a = a + b;
		b = a - b;
		a = a - b;
		printf("%d %d\n",a ,b);	//TODO
	}
	return 0;
}
