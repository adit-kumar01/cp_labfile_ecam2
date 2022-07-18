// Program to use all functions of <string.h> library:
#include <stdio.h>
#include <string.h> //library to be included
int main()
{
    char a[50];
    printf("Enter the string:\n");
    scanf("%s", a);
    printf("The length of the enter string is %d\n", strlen(a));
    printf("Revers of enter string : %s\n", strrev(a));
    printf("Lowercase of enter string : %s\n", strlwr(a));
    printf("Uppercase of enter string : %s\n", strupr(a));
    char b[6];
    strcpy(b, a);
    printf("String b : %s\n", b);
    char c[] = "Hello";
    strcat(b, c);
    printf("String b after concatenation : %s\n", b);
    printf("Comparing enter string  with c  : %d\n", strcmp(a, b));
    printf("Comparing string c with enter string : %d\n", strcmp(b, a));
    char d[] = "YOU";
    char e[] = "YOU";
    printf("Comparing two equal strings : %d\n", strcmp(e, d));
    return 0;
}