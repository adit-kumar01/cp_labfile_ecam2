// Program to print largest integer out of three:
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter first number:");
scanf("%d", &a);
printf("Enter second number:");
scanf("%d", &b);
printf("Enter third number:");
scanf("%d", &c);
if(a>b)
{
    if(a>c)
    {printf("%d is largest integer",a);
    }
    else
    {printf("%d is largest integer",c);
    }
}
else 
{
    if(b>c)
    {printf("%d is largest integer",b);
    }
    else
    {
     printf("%d is largest integer",c);
    }
}
return 0;
}