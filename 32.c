// Program to perform NULL,Void and wild pointer:
#include <stdio.h>
int main()
{
    int *a = NULL; // declaring null pointer
    printf("Address stored at null pointer: %d\n", a);

    void *b;
    // same void pointer can hold the address of both int and char type one at a time
    int num = 5;
    b = &num;
    printf("Integer Value at void pointer : %d\n", *((int *)b));
    char c = '$';
    b = &c;
    printf("Character Value at void pointer : %c\n", *((char *)b));

    int *p;   // it is a wild pointer as it is not pointing anything
    p = &num; // now it is not a wild pointer anymore.
    return 0;
}