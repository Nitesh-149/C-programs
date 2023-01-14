//Write a program where the user is asked to enter two integers (divisor and dividend) 
//and the quotient and the remainder of their division is computed.(Both divisor and dividend should be integers.)
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter divisor and dividend");
    scanf("%d,%d",&num1,&num2);
    printf("quotient= %d",num2/num1 );//how to use one printf insted of two
    printf(" remainder= %d",num2%num1);
    return 0;
}
