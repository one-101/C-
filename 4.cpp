#include <stdio.h>
#include<string.h>
#include<stdlib.h>
/*
int main()
{
	int ILoveyou = 0;
	ILoveyou = 1315;
	ILoveyou =ILoveyou;
	ILoveyou = 520;
	printf("%d\n", ILoveyou); 
	return 0;
}*/


//int main() {
//	int a[100];
//	int *p = NULL;
//	sizeof(a);
//	sizeof(a[0]);
//	sizeof(&a);
//	sizeof(int);
//	return 0;
//}

//int main() {
//	int i = -20;
//	unsigned j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}

//int main() {
//	unsigned i;
//	for (i = 9; i >= 0; i--) {
//		printf("%u\n", i);
//	}
//	return 0;
//}


//int main() {
//	const volatile int i = 10;
//	int j = i;
//	int k = i;
//	return 0;
//}
//struct student
//{
//	
//}stu;
//
//int main() {
//	
//	printf("%d\n", sizeof(stu));
//	return 0;
//}

//int main() {
//	int i=0;
//	int j=0;
//	int k=0;
//	j = (i++, i++, i++);
//	for (i = 0; i < 10; i++) {
//		//code
//	}
//	k = (i++) + (i++) + (i++);
//}

//#define X 3
//#define Y X*2
//#undef X
//#define X 2
//int main() {	int z = Y;
//	return 0;
//}

//struct TestStruct1
//{
//	char c1;
//	short s;
//	char c2;
//	int i;
//};
//struct TestStruct1 a;
//int main() {
//
//	printf("c1 %p, s %p, c2 %p, i %p\n",
//		(unsigned int)(void*)&a.c1 - (unsigned int)(void*)&a,
//		(unsigned int)(void*)&a.s - (unsigned int)(void*)&a,
//		(unsigned int)(void*)&a.c2 - (unsigned int)(void*)&a,
//		(unsigned int)(void*)&a.i - (unsigned int)(void*)&a);
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = { 1,2,5,6,1,2,5 };
//	return 0;
//}

//int main()
//{	
//	int t = 0;
//	int a = 0;
//	int b = 0;
//	 scanf("%d",&t);
//	while (t--)
//	{
//		scanf("%d %d",&a,&b);//单个字符整数输入需要取地址&
//		if (a % b || b == 0)
//		{
//			printf("NO\n");
//		}
//		else
//		{
//			printf("YES\n");
//		}
//		
//
//	}
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	double a = 0;
//	while (scanf("%lf",&a) != EOF) //%lf才能进行格式化输入
//	{
//		printf("%.2lf\n", fabs (a));
//	}
//	return 0;
//}

//
//#include<math.h>
//double x[2], y[2];
//double sqr (double x)
//{
//	return x * x;
//}
//
//int main()
//{
//	while (scanf("%lf %lf %lf %lf", &x[0], &y[0], &x[1], &y[1])!=EOF)
//	{
//		double ans = sqrt(sqr(x[0] - x[1]) + sqr(y[0] - y[1]));
//			printf("%.2lf\n",ans );
//	}
//	return 0;
//}

//int fac(int n)  //声明函数
//{
//	if (n<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//	
//}
//int main()
//{
//	int n = 0;
//	int N = 1;
//	while (scanf("%d", &n)!=EOF)
//	{
//		printf("%d\n", fac(n));
//	}
//	
//	
//	return 0;
//}

//int isLower(char c)
//{
//	return 'a' <= c && c <=  'z';
//}
//
//char getUpper(char c)
//{
//	return c - 'a' + 'A';
//}
//int main()
//{
//	char c;
//	while (scanf("%c", &c) !=EOF)
//	{
//		if (isLower(c))
//		{
//			c = getUpper (c);
//		}
//		printf("%c\n", c); //输出c时不用加&,会与输入冲突
//	}
//
//	return 0;
//}

//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int n,a,maxv,i;
//	scanf("%d", &n);
//	for (i=0;i<n;++i)
//	{
//		scanf("%d", &a);
//		if (i==0)
//		{
//			maxv = a;
//		}
//		else
//		{
//			maxv = max(a,maxv);//max函数中定义了两个整型变量，这也需要对应两个变量
//		}
//		printf("max= %d\n", maxv);
//	}
//	return 0;
//}

//int main()
//{
//	int n, a, i;
//	double mean = 0;
//	scanf("%d", &n);
//	for ( i = 0; i < n; i++)
//	{
//		mean = 0;
//		scanf("%d", &a);
//		mean += a;
//	}
//	mean /=  n;
//	
//	printf("%.2lf\n",mean);//除法运算只能得到整数无法计算出小数
//	return 0;
//}


//typedef unsigbed long long ull;
//const ull MAX = (((ull)1) << 62);
//int main()
//{
//	int t = 0;
//	ull a, b, c, d;
//	scanf("%d", &t);
//	while (t--)
//	{
//		scanf("%llu %llu %llu %llu", &a, &b, &c, &d);
//		if (a == MAX && b == MAX && c == MAX && d == MAX)
//		{
//			printf("18446744073709551616\n");//如果四个值均为最大值，此时为特殊情况直接将结果打印
//		}
//		else
//		{
//			printf("%llu\n", a + b + c + d);
//		}
//	}
//	return 0;
//}

//int getPeachNumber(int n)
//{
//	int num;
//	if (n == 10)
//	{
//		return 1;
//	}
//	else
//	{
//		num = (getPeachNumber(n + 1) + 1) * 2;//n+1是天数加一，num的计算过程是先+1再×2
//		printf("第%d天所剩桃子%d个数\n", n, num);
//	}
//	return num;
//}
//int main()
//{
//	int num = getPeachNumber(1);
//	printf("猴子第一摘了:%d个桃\n", num);
//	return 0;
////}
//
////int dfs(int n)
////{
////	return n == 1 ? 10 : dfs(n - 1) + 2;
////}
////int main()
////{
////	printf("% d\n",dfs(5));
////	return 0;
////}
//
////#define ll long long
////ll f(ll a, ll b, ll c) {
////	if (b == 0)
////		return 1 % c;           // (1)
////	ll v = f(a * a % c, b / 2, c);  // (2)
////	if (b % 2)
////		v = v * a % c;          // (3)
////	return v;
////}

//int main(void) {
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	scanf("%d",&t);
//	while (t--)
//	{
//		scanf("%d %d",&a,&b);
//		printf("%d\n",a+b);
//	};
//	return 0;
//}

//int main() {
//	int a, b;
//	while (scanf("%d %d",&a,&b)!=-1) {
//		if (a == 0 || b == 0)
//		{
//			break;
//		}
//		else
//		{
//			printf("%d\n", a + b);
//		}
//		
//	}
//	return 0;
//}

//int main(){
//	int n = 0;
//	
//	while (scanf("%d",&n)!= -1)
//	{
//		int ans = 0;
//			while (n)
//			{
//				ans += n;
//				--n;
//			}
//		printf("%d\n",ans);
//	}
//	
//	return 0;
//}

//int main() {
//	int i,j,n;
//	while (scanf("%d", &n) != EOF)
//	{
//		
//		for (i = 1; i <= n; ++i)
//		{
//			for (j = 1; j <= i; ++j) {
//				printf("*");
//			printf("\n");
//			}
//			
//		}
//	}
//	
//
//	return 0;
//}
//int arradd(int arr[], int n);
//int main() {
//	int data[] = { 1,2,3,4,5,6,7,7,8,9,0 };
//	int size = sizeof(data) / sizeof(data[0]);
//	printf("%d\n",arradd(data,size));
//	return 0;
//}
//
//int arradd(int arr[], int n) {
//	int sum = 0;
//	for (int i = 0; i < n; ++i) {
//		sum +=  arr[i];
//	}
//	return sum;
//}

//#include<stdlib.h>
//int main() {
//	int n = 0;
//	int sum = 0;
//	char ch;
//	while (scanf("%d", &n) == 1) {
//		sum += n;
//		while ((ch = getchar()) == ' ')
//			;//屏蔽空格，；表示结束while语句。
//			if (ch == '\n')
//			{
//				break;
//			}
//			ungetc(ch, stdin);
//		
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//char specialChar[] = "~!@#$%^";
//int isSpecialChar(char c) {
//    for (int i = 0; specialChar[i]; ++i) {
//        if (specialChar[i] == c)                              // (1)
//            return 1;
//    }
//    return 0;
//}
//char str[100];
//int typ[4];
//int main() {
//    int t;
//    scanf("%d", &t);
//    while (t--) {
//        scanf("%s", str);
//        if (strlen(str) < 8 || strlen(str) > 16) {
//            printf("NO\n");                                  // (2)
//            continue;
//        }
//        typ[0] = typ[1] = typ[2] = typ[3] = 0;
//        for (int i = 0; str[i]; ++i) {                       // (3)
//            if (str[i] >= 'a' && str[i] <= 'z') typ[0] = 1;
//            if (str[i] >= 'A' && str[i] <= 'Z') typ[1] = 1;
//            if (str[i] >= '0' && str[i] <= '9') typ[2] = 1;
//            if (isSpecialChar(str[i])) typ[3] = 1;
//        }
//        if (typ[0] + typ[1] + typ[2] + typ[3] >= 3) {        // (4)
//            printf("YES\n");
//        }
//        else {
//            printf("NO\n");
//        }
//    }
//    return 0;
//}

void getmemory(char** p) {
    *p = (char*)malloc(100);
    strcpy(*p, "hello world");
}
int main()
{
    char* str = NULL;
    getmemory(&str);
    printf("%s\n", str);
    free(str);
    return 0;
}