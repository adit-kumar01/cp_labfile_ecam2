// Program to use contitional operator:
#include<stdio.h>
int main()
{
int a,b;
printf("Enter two different Number:");
scanf("%d%d",&a,&b);
(a>b)?printf("%d>%d",a,b):printf("%d<%d",a,b);
return 0;
}
