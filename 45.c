// union:
#include <stdio.h>

union abc
{
    int a;
    char b;
};

int main()
{
    union abc data;
    data.a = 65;
    printf("%c \n", data.b);
    printf("%d", data.a);

    return 0;
}