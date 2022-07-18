// Program to comput sum of all elements store in a array using pointer:
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements of array");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Element [%d] :", i);
        scanf("%d", &arr[i]); // enter the value of arraty elements
    }
    for (int i = 0; i < n; i++)
    {
        sum += *(ptr + i); // summing the elemenrts
    }
    printf("%d", sum);

    return 0;
}