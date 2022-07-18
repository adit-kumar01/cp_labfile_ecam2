// Program to perform array of pointer:
#include <stdio.h>
int main(){
int a[5]={10,20,30,40,50};
int *ptr[5];
for (int i=0;i<5;i++)
ptr[i]=&a[i];

for(int i=0;i<5;i++){
    printf("Value of a[%d] : %d\n",i,*ptr[i]);
}
return 0;
}