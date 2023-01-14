#include <stdio.h>

int main()
{
    float Km,m,cm;
    printf("Enter the distance in Km");
    scanf("%f",&Km);
    m=Km*1000;
    printf("%f\n",m);
cm=Km*1000000;
printf("%f",cm);
    return 0;
}