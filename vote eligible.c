#include<stdio.h>
#include<conio.h>
int main ()
{
	int Age;
	printf("Enter the Age");
	scanf("%d",&Age);
	if(Age>=18)
	{
		printf("Eligible for vote :%d\n",Age);
	}
	else
	printf("Not eligible for vote :%d\n",Age);
}
