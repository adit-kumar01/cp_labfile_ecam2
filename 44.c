// Program a program for file handling using (i) by creating file pointer, (ii) by creating string:

#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("num.txt", "w+");
    char dtr[1000];
    printf("Enter the string\n");
    gets(dtr);
    fputs(dtr, fptr);
    fclose(fptr);

    return 0;
}