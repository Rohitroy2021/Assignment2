//Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)
#include<stdio.h>
int main()
{
int x,y=0,z;
printf("Enter a number");
scanf("%d",&x);
y=(x/10)*10;
printf("Result is %d ",y);
return 0;
}
