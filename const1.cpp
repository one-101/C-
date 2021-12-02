#include <stdio.h>
const int love = 1315;
int main (){
	love = 431; //此处报错原因为love已经用const 定义为常量不可修改 
	printf("%d\n",love);
	return 0;
} 
