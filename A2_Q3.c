//Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
printf("a is %d and b is %d\n",a,b);
c=a;
a=b;
b=c;
printf(" After swapping a is %d and b is %d\n",a,b);
return 0;
}
