// Program for call by reference using swap:
#include <stdio.h>
void call_by_reference_swap (int *a,int *b){
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
printf("Before Swapping\nNumber 1: %d\nNumber 2: %d",n1,n2);
call_by_reference_swap(&n1,&n2);
printf("\nAfter Swapping\nNumber 1: %d\nNumber 2: %d",n1,n2);
printf("\n\nModification occured as call by reference is used");
return 0;
}