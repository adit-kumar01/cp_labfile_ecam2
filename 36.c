// Program for swapping:
#include <stdio.h>
void swap (int *a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
int main(){
int n1;
printf("Enter first number : ");
scanf("%d",&n1);
int n2;
printf("Enter second number : ");
scanf("%d",&n2);
swap(&n1,&n2);
printf("After Swapping\nNumber 1: %d\nNumber 2: %d",n1,n2);
return 0;
}