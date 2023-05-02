 #include<stdio.h>
 int main ()
 {
 
 	int number,remainber,sum;
 	printf("Enter the number");
 	scanf("%d",&number);
 	while(number>0)
 	{
 		remainber=number%10;
 	sum=number+remainber;
 	number=number/10;
	 }
	 printf("sum of two digit of given number is :%d\n",sum);
 	return 0;
 }
