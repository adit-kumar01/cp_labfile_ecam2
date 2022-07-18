// Program to store elements in matrix and print them:
#include<stdio.h>
int main()
{
int ar[3][3];
printf("Enter the elements of 3 by 3 matrix rowwise:\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("Element [%d][%d] :", i,j);
        scanf("%d", &ar[i][j]);
    }
    
}
printf("The matrix is:\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%d\t", ar[i][j]);
    }
   printf("\n"); 
}

return 0;
}
