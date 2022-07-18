// Program to print factorial of natural number
#include<stdio.h>
int main()
{
    int a;
    long long fact=1;
    printf("Enter the number:");
    scanf("%d", &a);
    for (int i = a; i>0; i--)
    {
        
        fact= fact*i;
    }
    printf("Factorial of %d is %lld", a,fact);
    return 0;
}



// #include<stdio.h>
// int main()
// {
// int i;
// long long fact=1;
// printf("Enter the Number:");
// scanf("%d", &i);
// while (i>0)     
// {
//     fact=fact*i;
//     i--;
// }
// printf("Factorial of %d is %lld",i,fact);
// return 0;
// }