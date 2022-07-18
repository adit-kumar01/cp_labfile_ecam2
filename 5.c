// Program to check number is even or odd:
#include<stdio.h>
int main()
{
int a;
printf("Enter The Number:");
scanf("%d", &a);
if(a%2==0)
{
printf("%d is EVEN", a);
}
else
{
printf("%d is odd", a);
}
return 0;
}