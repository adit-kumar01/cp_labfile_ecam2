//Program of matrix multiplication:
#include<stdio.h>
int main()
{
int m,n,p,q;
int A[10][10],B[10][10],SUM[10][10];
printf("Enter the row and column of Matrix A:\n");
scanf("%d%d",&m,&n);
printf("Enter the row and column of Matrix B:\n");
scanf("%d%d",&p,&q);
if (n==p)
{
    printf("Enter the Element of Matrix A:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element [%d][%d] :", i,j);
            scanf("%d", &A[i][j]);
        }
        
    }
    printf("Enter the Element of Matrix B:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Element [%d][%d] :", i,j);
            scanf("%d", &B[i][j]);
        }
        
    }
printf("The Multiplication of the Matrix A and B is =\n");    
for(int i=0;i<m;i++)    
{    
for(int j=0;j<n;j++)    
{    
SUM[i][j]=0;    
for(int k=0;k<n;k++)    
{    
SUM[i][j]+=A[i][k]*B[k][j];    
}    
}    
}
for(int i=0;i<m;i++)    
{    
for(int j=0;j<n;j++)    
{    
printf("%d\t",SUM[i][j]);    
}    
printf("\n");    
} 
}
else
{
    printf("Matrix Multiplication is not Valid");
}
        
return 0;
}