#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("a%b=%d\n",a%b);
	printf("a/b=%d\n",a/b);
	printf("%d余%d\n",a/b,a%b);
	return 0;
}
// / 表示商取整
// % 表示商取余（模） 
