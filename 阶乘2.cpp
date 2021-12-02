#include<stdio.h>
int main(){
	int a = 0;
	int ns = 1;
	while(scanf("%d",&a)!= EOF){
		ns = 1;
		while(a){
		ns *= a;
		--a;	//TODO
		} 
		printf("%d\n",ns);
	}
	
	return 0;
}
