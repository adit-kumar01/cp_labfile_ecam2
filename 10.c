// Program to calculate perimeter and area of rectangal:
#include<stdio.h>
int main()
{
int a,b;
printf("Enter the Length of rectangle:");
scanf("%d", &a);
printf("Enter the breath of rectangle:");
scanf("%d", &b);
printf("The perimeter of rectangle is %d\n",a+b+a+b);
printf("The area of rectangle is %d",a*b);
return 0;
}