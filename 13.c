// Program to calculate sum of first n natural number
#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("Enter the last Natural number upto which you have to sum: ");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
    sum+=i;
}
printf("The sum of first %d Natural number is %d",n,sum);
return 0;
}