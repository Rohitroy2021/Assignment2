//Write a program to take a three-digit number from the user and rotate its digits by
//one position towards the right.
#include<stdio.h>
int main()
{
int x,y=0,z;
printf("Enter a number");
scanf("%d",&x);
while(x!=0)
{
z=x%10;
y=y*10+z;
x=x/10;
}
printf("Reverse is %d",y);
return 0;
}
