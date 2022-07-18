// Program to print star triangle patten:
// #include<stdio.h>
// int main()
// {
// for (int i = 1; i < 6; i++) 
// {for (int j = 1; j<=i; j++)
// {
//     printf("*");
// }

//     printf("\n");
// }

// return 0;
// }

#include<stdio.h>
int main()
{
for (int i = 6; i > 1; i--) 
{for (int j = i; j>1; j--)
{
    printf("*");
}

    printf("\n");
}
return 0;
}