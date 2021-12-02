#include <stdio.h>
int main()
{	
	int n = 0;
	int temp = 0;
	while(scanf("%d",&n)!= EOF)
	{
		if(n == 0){
			break;
		}
		for(int i=0;i<n+1;i++){
			temp = temp + i;//TODO
		}
		printf("NµÄÀÛ¼Ó=%d\n",temp);
		printf("\n");
		//TODO
	}
	return 0; 
}
