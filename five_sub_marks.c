#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5,per,agg;
    printf("enter mark obtain in sub1");
    scanf("%f",&sub1);
    printf("enter mark obtain in sub2");
     scanf("%f",&sub2);
    printf("enter mark obtain in sub3");
     scanf("%f",&sub3);
    printf("enter mark obtain in sub4");
     scanf("%f",&sub4);
    printf("enter mark obtain in sub5");
     scanf("%f",&sub5);
     agg=sub5+sub4+sub3+sub2+sub1;
     printf("Aggrigate mark %f",agg);
     per=agg/5;
     printf("percentage got %f",per);
}
