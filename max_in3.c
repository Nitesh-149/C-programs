//program to find maximum number b/w three number
#include<stdio.h>
int main()
{
    int num1, num2,num3;
printf("enter first no. second no. third no.");
scanf("\n%d,%d,%d",&num1,&num2,&num3);
if (num1>num2&&num1>num3)
{
   printf("%d is graterthen %d and %d",num1,num2,num3);
}
else
{
    if (num2>num1&&num2>num3)
    {
        printf("%dis grater then %d and%d",num2,num1,num3);
    }
    else
    {
        printf("%d is grater then %d and %d",num3,num2,num1);
    }
}

    return 0;
}
