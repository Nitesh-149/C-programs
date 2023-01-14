//8.Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
#include<stdio.h>
int main()
{
    float cel;
    printf("Enter the temprature in celcius");
    scanf("%f",&cel);
    printf("Value in Fahrenheit is: %f",cel*9/5+32);
    return 0;
}
