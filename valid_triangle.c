//write a program to chek wether a triangle is valid or not 
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st, 2nd, 3rd angle\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b+b==180)
    {
        printf("This Triangle is Valid");
    }
    else
    printf("This Triangle is not Valid");
    
    return 0;
}
