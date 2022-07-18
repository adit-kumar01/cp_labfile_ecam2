// Program for call by value using swap:
#include <stdio.h>
void call_by_value_swap (int a,int b){
    int tmp=a;
    a=b;
    b=tmp;
}
int main(){
int n1;
printf("Enter first number : ");
scanf("%d",&n1);
int n2;
printf("Enter second number : ");
scanf("%d",&n2);
printf("Before Swapping\nNumber 1: %d\nNumber 2: %d",n1,n2);
call_by_value_swap(n1,n2);
printf("\nAfter Swapping\nNumber 1: %d\nNumber 2: %d",n1,n2);
printf("\n\nNo modification occured as call by value is used");
return 0;
}