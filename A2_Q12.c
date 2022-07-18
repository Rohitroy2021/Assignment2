//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
//convert it into USD.
#include<stdio.h>
int main()
{
int INR;
float c;
printf("Enter amount in INR");
scanf("%d",&INR);
c=(1/76.23)*INR ;
printf("The amount is %f USD",c);
return 0;
}
