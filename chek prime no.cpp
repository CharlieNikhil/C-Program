#include<stdio.h>
#include<conio.h>
int main ()
{
	int number,i,flag=0;
	printf("Enter a number\n");
	scanf("%d",&number);
	for(i=2;i<number;i++)
	{
		if(number%i==0)
		{
		flag=1;
		printf("The given number %d is not prime number",number);
		break;}
	}
	if(flag==0)
	printf("The given number %d is a prime number",number);
	return 0;
}
