//write a c-program to find out whether a student is pass or fail ; if it requires total 40% and at least 33% in esch subeject to pass.Assure 3 subject and take marks as an input from the user.
#include<stdio.h>
int main ()
{
	int math,physics,chemistry;
	float total;
	printf("Enter the number\n");
	scanf("%d%d%d",&math,&physics,&chemistry);
	total=(math+physics+chemistry)/3;
	if(total<40||math<33||physics<33||chemistry<33)
	{
		printf("your total parcentage is %f and you are fail\n",total);
	}
	else
	{
		printf("your total percentge is %f and you are pass\n",total);
	}
	return 0;
}
