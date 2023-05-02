#include<stdio.h>

int main()
{
    int row;
    printf("Enter the number\n");
    scanf("%d",&row);
    for(int i=row;i>=1;i--)
    {
        for(int space=1;space<=(row-i);space++)
        { 
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf(" \n");
    }


    return 0;
}