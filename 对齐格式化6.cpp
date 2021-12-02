#include <stdio.h>
int main(){
	double x = 165.5654;
	int y = 123;
	
	printf("[%15.6lf]\n",x);
	printf("[%-15.6lf]\n",x);
	
	printf("[%10.6d]\n",y);
	printf("[%-10.6d]\n",y);
	return 0;
} 
