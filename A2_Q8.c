//Write a program to check whether the given number is even or odd using a bitwise
//operator.
#include<stdio.h>
int main()
{
int x;
printf("Enter a number :");
scanf("%d",&x);
if((x&1)==0)
    printf("Number is even");
else
    printf("Number is odd");
return 0;
}
