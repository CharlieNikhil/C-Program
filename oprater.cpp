#include<stdio.h>
int main()
{
	int a,b,ch;
	printf("Enter the value\n");
	scanf("%d%d",&a,&b);
	printf("Enter thr case\n");
	scanf("%d",&ch);
	switch(ch){
		{
		case 1:
			printf("addition:%d",a+b);
			break;
			case 2:
			printf("ubstraction:%d\n",a-b);
			break;
			case 3:
			printf("multiplay:%d\n",a*b);
			break;
			case 4:
			printf("devided:%d\n",a/b);
			break;
			case 5:
			printf("modul:%d\n",a%b);
			break;
			default:
		    printf("invaid number");
		    break;}
	}
	return 0;
}
