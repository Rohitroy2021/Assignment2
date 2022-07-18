//Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
int a=1,b=2,c;
printf("Before swaping a is %d and b is %d\n",a,b);
 c=a+b;
 a=c-a;
 b=c-b;
printf("Ater swaping a is %d and b is %d\n",a,b);
return 0;
}
