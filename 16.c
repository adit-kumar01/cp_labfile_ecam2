// Program to add number until user enter zero
#include<stdio.h>
int main()
{
int i, result=0;
do
{
    printf("Enter the Number:");
    scanf("%d", &i);
    result+=i;
}
while (i!=0);
{
    printf("Sum of number until you enter zero = %d", result);
}

return 0;
}