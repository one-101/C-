#include <stdio.h>
/*
int main()
{
	char a;
	a = getchar();
	if(a >= '0'&& a <= '9'){
		printf("number\n");//TODO
	}else if(a >= 'A'&& a <= 'Z'){
		printf("upper letter\n");//TODO
	}else if(a >= 'a' && a <= 'z'){
		printf("lowwer leeter\n");//TODO
	}else{
		printf("other\n");//TODO
	}
	return 0;
}
*/

 int main()
 {	
 	int t = 0;
 	int a = 0;
 	int b = 0;
 	scanf("%d",&t);
 	while (t--)
 	{
 		scanf("%d %d",&a,&b);//单个字符整数输入需要取地址&
 		if (a % b || b == 0)
 		{
 			printf("NO\n");
 		}
 		else
 		{
 			printf("YES\n");
 		}
 		
 
 	}
 	return 0;
 }
