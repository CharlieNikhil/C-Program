#include<stdio.h>

int main()
{
    int size,i,a[10];
    int Even_sum=0,odd_sum=0;
    printf("\n please enter the size of an arrey:");
    scanf("%d",&size);
    printf("\n please enter the Arrey element:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            Even_sum=Even_sum+a[i];
        }
        else
        {
        odd_sum=odd_sum+a[i];
        }
    }
    printf("\n The sum of Even numbers in this Array=%d",Even_sum);
printf("\n The sum of odd number is=%d",odd_sum);

    return 0;
}