//Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
int a,r;
printf("Enter the digit: ");
scanf("%d",&r);
a=r/10;
printf("Number without last digit is %d\n",a);
return 0;
}
