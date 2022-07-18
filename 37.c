// Program using structure:
#include <stdio.h>
#include<string.h>
struct st_details{
    char name[10];
    int roll_no;
};
int main(){
struct st_details s1;
strcpy(s1.name,"Adit");
s1.roll_no=28;
printf("The name of student 1: %s\nRoll no of student 1: %d",s1.name,s1.roll_no);
return 0;
}