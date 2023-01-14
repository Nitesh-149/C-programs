#include<stdio.h>
int fact(int val)
{
 int a,b=1;
 for(a=1;a<=val;a++)
 {
     b=b*a;
 }
 return b;
}
int main()
{
    int n,count,final_result,vem,sum=0,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    for(temp=n;n>0;n=n/10)
    {
        vem=n%10;
        final_result = fact(vem);
        sum=sum+final_result;
    }
    if(sum==temp)
    {
        printf("strong no.");
    }
    else
    {
         printf("Not strong no.");
    }
}

