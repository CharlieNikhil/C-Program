#include<stdio.h>
int main()
{
	int i;
	printf("Enter the number\n");
	scanf("%d",&i);
	do
	{
		printf("%d\n",i);
		i++;
	}while(i<=10);
	return 0;
}
