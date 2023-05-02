//write a program to input the largest number of three.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	int n1,n2,n3;
	printf("Enter the no");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3)
	{
		printf("n1 is largest no :%s\n",n1);
	}
	if(n2>n1 && n2>n3)
	{
		printf("n2 is largest no :%d\n",n2);
	}
	if(n3>n1 && n3>n2)
	{
		printf("n3 is largest on :%d\n");
	}
	 else
	{
		printf("all are equal to each other");
	}
 } 
