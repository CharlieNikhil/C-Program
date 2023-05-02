#include<stdio.h>

int main()
{
    int i,n;
    float num[100],sum=0.0,Avg;
    printf("Enter the number of element:");
    scanf("%d",&n);
    {
        {
            for(i=0;i<n;i++)
            {
                printf("%d Enter number:",i+1);
                scanf("%f",&num[i]);
                sum+=num[i];
            }
            Avg=sum/n;
            printf("sum=%2f\n",sum);
            printf("Average=%2f\n",Avg);
        }
    }


    return 0;
}