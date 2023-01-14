//7.Write a C program to enter length in centimeter and convert it into meter and kilometer.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float cm;
    printf("Enter the value in cm");
    scanf("%f",&cm);
    float m=cm/100;
    printf("Value in Meter is: %f\n",m);
    float km=cm/100000;
    printf("Value in Kilometer is: %f",km);
    return 0;
}
