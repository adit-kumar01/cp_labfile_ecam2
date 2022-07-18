//Program for matrix substraction:
#include<stdio.h>
int main()
{
int A[3][3], B[3][3], min[3][3];
printf("Enter the elements of Matrix A:\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("Element [%d][%d] :", i,j);
        scanf("%d", &A[i][j]);
    }
    
}
printf("Enter the elements of Matrix B:\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("Element [%d][%d] :", i,j);
        scanf("%d", &B[i][j]);
    }
    
}
printf("The difference of Matrix A and B is\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        min[i][j]=A[i][j] - B[i][j];
        printf("%d\t", min[i][j]);
    }
    printf("\n");
}
return 0;
}