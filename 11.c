// Program to calculate simple intrest:
#include<stdio.h>
int main()
{
float P,R,T;
printf("Enter the value of principal:");
scanf("%f", &P);
printf("Enter the value of rate:");
scanf("%f", &R);
printf("Enter the time in years:");
scanf("%f", &T);
printf("The value of simple intrest is %f", P*R*T/100);
return 0;
}