// Program for array of structure:
#include <stdio.h>
struct st_details{
    char name[10];
    int roll_no;
};
int main(){
struct st_details s[4];
strcpy(s[0].name,"Adit");
s[0].roll_no=1;
strcpy(s[1].name,"Shubham");
s[1].roll_no=2;
strcpy(s[2].name,"Vishal");
s[2].roll_no=3;
strcpy(s[3].name,"Mayank");
s[3].roll_no=4;
for (int i=0;i<4;i++){
printf("\n\nDetails of Students %d\n",i+1);
printf("The name of student %d: %s\nRoll no of student %d: %d\n",i+1,s[i].name,i+1,s[i].roll_no);
}
return 0;
}