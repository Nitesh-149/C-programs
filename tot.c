//
#include<stdio.h>
int main()
{
 int qty, dis;
 float price,total;
printf("Enter quantaty and price of the product\n");
scanf("%d%f",&qty,&price);
total=qty*price;
if(total>1000)
{
    dis=0.1;
    total=(qty*price)+(qty*price*0.1);
    printf("%f",total);
}
else
 printf("%f",total);
    return 0;
}
