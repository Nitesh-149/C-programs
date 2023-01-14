//6.Write a C program to enter radius of a circle and find its diameter, circumference and area.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float r;
    printf("Enter the radius of the circle\n");
    scanf("%f",&r);
    printf("Diameter of the circle is: %f \n",2*r);
    printf("circumfarence of the circle is: %f \n",2*3.14*r);
    printf("Area of the circle is: %f",3.14*r*r);
    
    
    return 0;
}
