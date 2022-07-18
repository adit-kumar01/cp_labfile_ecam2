//Pogram for traversing of an array using pointer:
#include <stdio.h>
#include <stdlib.h>
int main(){
int a[10]={10,20,30,40,50,60,70,80,90,100};
int *ptr=a;
int i=1;
while(i<=10){
    printf("Element %d of array : %d\n",i,*ptr);
    ptr++;
    i++;
}
return 0;
}
