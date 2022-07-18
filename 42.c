// Program to calculate factorial of a number using Recursion:
#include <stdio.h>
int factorial(int num)
{
    if (num == 1)
    {
        return num;
    }
    return num * factorial(num - 1);
}
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    int a = factorial(n);
    printf("%d", a);
}
