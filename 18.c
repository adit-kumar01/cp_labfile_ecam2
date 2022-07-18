// Program to calculate sum of five number but skip the negative number
#include<stdio.h>
int main()
{
int i,num,sum;
printf("Enter the five number:");
for ( i = 1; i < 6; i++)
{
    scanf("%d", &num);
    if (num<0)
    {
        continue;
    }
    sum = sum + num;
}
printf("The sum of five number is %d", sum);
return 0;
}