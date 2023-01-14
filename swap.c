//Write a Program to Swap Two Numbers
#include<stdio.h>
int main()
{
    int a,b;
    a = 5;
    b = 9;
    printf("The numbers before swap are %d and %d \n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The numbers after swap are %d and %d \n",a,b);
    return 0;
}
