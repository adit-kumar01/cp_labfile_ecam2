// Program for Nested Structure:
#include <stdio.h>
struct st_details{
    char name[10];
    int roll_no;
    struct address{
        int house_no;
        int street_no;
    }add;
};
int main(){
struct st_details s1;
strcpy(s1.name,"Adit");
s1.roll_no=28;
s1.add.house_no=191;
s1.add.street_no=2;
printf("The name of student 1: %s\nRoll no of student 1: %d\n",s1.name,s1.roll_no);
printf("Address of Student1\nHouse No: %d\nStreet No: %d",s1.add.house_no,s1.add.street_no);
return 0;
}