//Write a C program to enter length and breadth of a rectangle and find its perimeter.
#include<stdio.h>
int main()
{
    int len,bre;
    printf("Enter the value of length and breath of rectangle\n");
scanf("%d %d",&len,&bre);
printf("perimeter of rectangle is: %d",2*(len+bre));
    return 0;
}
