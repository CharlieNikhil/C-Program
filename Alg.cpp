//write a c- program to evolution algebraic expression.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	float a,x,b,alg;
	printf("Enter the no");
	scanf("%f%f%f",&a,&x,&b);
	alg = (a*x+b)/(a*x-b);
	printf("find the value of alg :%f\n",alg);
}
