//Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number. (Example - number=234 and
//digit=9 then the resulting number is 2349)
#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter a number: ");
scanf("%d",&x);
printf("Enter a digit: ");
scanf("%d",&y);
z=x*10+y;
printf("The result is %d",z);
return 0;
}
