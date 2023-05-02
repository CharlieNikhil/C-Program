#include<stdio.h>
#include<math.h>
int main ()
//write the c- program to findthe sum of the series 1^3+2^3+3^3+---+N^3.
{
	int i,sum=0,N;
	printf("Enter the value of N");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		sum= sum+i*i*i;
	}
	printf("\n sum of series is :%d",sum);
	return 0;
}
