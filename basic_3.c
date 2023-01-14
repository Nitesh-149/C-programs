// Write a C program to enter two numbers and perform all arithmetic operations.
#include<stdio.h>
int main()
{
    int num1,num2;
   printf("Enter two number");
    scanf("%d %d",&num1, &num2);
    printf("sum of tow number is: %d",num1+num2);
    printf("\nsubtraction of tow number is: %d",num1-num2);
    printf("\nMultiplication of tow number is: %d",num1*num2);
    printf("\ndivision of tow number is: %d",num1/num2);
    return 0;
}
