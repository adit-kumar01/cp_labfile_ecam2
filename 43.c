// program to find average of random number using variable arguments:
#include <stdio.h>
#include <stdarg.h>
float avg(int num, ...)
{
    va_list valist;
    float sum = 0.0;
    va_start(valist, num);
    for (int i = 0; i < num; i++)
    {
        sum += va_arg(valist, int);
    }
    va_end(valist);
    return sum / num;
}
int main()
{
    printf("The average of 3,4,5,6 is %f\n", avg(4, 3, 4, 5, 6));
    return 0;
}