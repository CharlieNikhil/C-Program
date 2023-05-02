//write a c- program to find the reminder of a division using for modul division.
#include<stdio.h>
#include<conio.h>
int main ()
{
	int n1, n2,M;
	printf("Enter the no");
	scanf("%d%d",&n1,&n2);
	M = n1%n2;
	printf("find the value of reminder :%d\n",M);
}
