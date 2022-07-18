//Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
int a,b,c,d,e,sum;
printf("Enter a number :");
scanf("%d",&a);
b=a/100;
c=a%100;
d=c%10;
e=c/10;
sum=b+d+e;
printf("The sum of number is %d",sum);
return 0;
}
