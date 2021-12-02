#include <stdio.h>
#include <math.h>
int main(){
	double a = 0;
	while(scanf("%lf", &a) != EOF){
		printf("a=%.2lf\n",fabs(a));//TODO
	}
	return 0;
}
