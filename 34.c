// Program to perform pointer to function:
#include <stdio.h>
#include <stdlib.h>
void square(int a)
{
    printf("The sqaure of the %d is : %d", a, a * a);
}

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    void (*fun_ptr)(int) = &square;
    (*fun_ptr)(n); // function calling using pointer to a function
    return 0;
}