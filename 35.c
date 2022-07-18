// Program to perform pointer as an argument to another function:
#include <stdio.h>
#include <stdlib.h>
int square(int a)
{
    return a * a;
}
void pow_4(int a)
{
    printf("The pow_4 is : %d", a * a);
}

int main()
{
    int (*p1)(int) = &square;
    void (*p2)(int) = &pow_4;
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    (*p2)((*p1)(n));
    return 0;
}