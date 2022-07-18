// Program to find average of 10 numbers entered by user:
#include<stdio.h>
int main()
{
float ar[10],sum=0,avg;
printf("Enter the 10 numbers:");
for (int i = 0; i < 10; i++)
{
    scanf("%f", &ar[i]);
    sum+=ar[i];
}
avg=sum/10;
printf("The average of 10 number is %f", avg);
return 0;
}