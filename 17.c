// Program to calculate sum of first five number entered by user and terminate the loop for negative number
#include<stdio.h>
int main()
{
int a, result=0;
for (int i = 1; i < 6; i++)
{

    printf("Enter the number:");
    scanf("%d", &a);
        if (a<0)
    {
        break;
    }
    result = result + a;

}
printf("sum = %d", result);
return 0;
}