#include <stdio.h>
int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int n = 0;
	int a = 0;
	int maxc = 0;
	while(scanf("%d",&n)!= EOF){
		for(int i=0;i<n;++i){
			scanf("%d",&a);
			if(i == 0){
				maxc = a;//TODO
			}
			maxc = max(a,maxc);
		}
	 	printf("%d\n",maxc);
	}
	return 0;
}
