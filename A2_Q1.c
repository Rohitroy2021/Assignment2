//Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
int a,r;
printf("Enter the digit: ");
scanf("%d",&r);
a=r%10;
printf("Unit digit is %d\n",a);
return 0;
}
