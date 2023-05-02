//Write a c- program to find the sum & avg of three no.
#include<stdio.h>
#include<conio.h>
int main ()
{
	int n1,n2,n3,sum,avg;
	printf("Enter the no");
	scanf("%d%d%d",&n1,&n2,&n3);
	sum=n1+n2+n3;
	avg=sum/3;
	printf("find the value of sum:%d\n",sum);
	printf("find the value of avg:%d",avg);
	return 0;
}
