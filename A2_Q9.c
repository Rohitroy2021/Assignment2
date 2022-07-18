//Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
    int integerType;
    float floatType;
    char characterType;
    double doubleType;
printf("size of int is %zu \n",sizeof(integerType));
printf("size of float is %zu \n",sizeof(floatType));
printf("size of char is %zu \n",sizeof(characterType));
printf("size of double is %zu \n",sizeof(doubleType));
return 0;
}
