//write a pogram to calculate and display the valume of a cuboid having its (h=10,w=12cm,d=8cm).
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int h,w,d,vol;
	printf("Enter the no");
	scanf("%d%d%d",&h,&w,&d);
	vol = h*w*d;
	printf("find the valume of cuboid :%d\n",vol);
}
