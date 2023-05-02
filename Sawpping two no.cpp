#include<stdio.h>
int main ()
{
	int a,b;
	printf("Enter two no");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping two number a=%d,b=%d\n",a,b);
	return 0;
}
