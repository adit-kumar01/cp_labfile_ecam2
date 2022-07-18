// Program for calculator using switch case:
#include<stdio.h>
int main()
{
    char x;
    int a,b;
    printf("Enter the operation to be perform(+,-,*,/):");
    scanf("%c",&x);
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    switch(x)
    {
    case'+':printf("%d+%d=%d",a,b,a+b);
    break;
    case'-':printf("%d+%d=%d",a,b,a-b);
    break;
    case'*':printf("%d*%d=%d",a,b,a*b);
    break;
    case'/':printf("%d/%d=%d",a,b,a/b);
    break;
    default:printf("Enter valid operation");
    }
    return 0;
}