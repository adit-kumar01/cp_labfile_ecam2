// Program to perform pointer increment, decrement, addition and substraction:
#include <stdio.h>
#include <stdlib.h>
int main(){
int a[6]={1,2,3,4,5,6};
int *ptr=a;
printf("Original address : %d\nOriginal Value : %d\n\n",ptr,*ptr);
//incrementing the pointer 
ptr++;
printf("After incrementing address: %d\nAfter Incrementing value: %d\n\n",ptr,*ptr);
//decrementing the pointer 
ptr--;
printf("After decrementing address: %d\nAfter decrementing value: %d\n\n",ptr,*ptr);
//addition
ptr+=4;
printf("After addition address: %d\nAfter addition value: %d\n\n",ptr,*ptr);
//substraction
ptr-=2;
printf("After substraction address: %d\nAfter substraction value: %d\n\n",ptr,*ptr);
return 0;
}