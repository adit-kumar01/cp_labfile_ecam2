//Program to count out vowels in a string:
#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int count=0;
printf("Enter The String letter:\n");
scanf("%s",a);
for (int i=0; i<strlen(a); i++)
{
    if (a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
    {
    count++;
    }
}
printf("The vowels in Enter word is %d", count);
return 0;
}