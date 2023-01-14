//9.Write a C program to enter temperature in Fahrenheit and convert to Celsius
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float fa;
    printf("Enter value in Fahrenheit");
    scanf("%f",&fa);
     printf("Value in Celsius is: %f",(fa-32)*5/9);
    return 0;
}
