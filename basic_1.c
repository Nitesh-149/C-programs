// Write a C program to perform input/output of all basic data types.
#include<stdio.h>
int main()
{
    int num;
    char ch;
    float f;

    //input the integer
    printf("enter the integer: ");
    scanf("%d",&num);
    printf("\nEntered integer is is: %d",num);

// float
getchar();
printf("\nEnter the float: ");
scanf("%f",&f);
printf("\n Entered float is: %f",f);
//character
getch();
printf("\n\nEntered the charactor");
scanf("%c,&ch");
printf("\nEntered charactor is: %c",ch);
    
}
