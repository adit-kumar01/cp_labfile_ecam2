// Program for matrix addition:
#include<stdio.h>
int main()
{
int A[3][3], B[3][3], sum[3][3];
printf("Enter the elements of Matrix A:\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("Element [%d][%d] :", i,j);
        scanf("%d", &A[i][j]);
    }
    
}
printf("Enter the elements of Matrix B:");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("Element [%d][%d] :", i,j);
        scanf("%d", &B[i][j]);
    }
    
}
printf("The sum of Matrix A and B is\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        sum[i][j]=A[i][j] + B[i][j];
        printf("%d\t", sum[i][j]);
    }
    printf("\n");
}
return 0;
}