//wap to iinput a array of 10 no and count total no positives, negative and zero elements and dispplay the count
#include<stdio.h>
#define N 10
int main()
{
    int a[N],i,p=0,n=0,z=0;
printf("Enter %d element",N);
for ( i = 0; i < N; i++)
{
    scanf("%d",&a[i]);
}
for ( i = 0; i < N; i++)
{
    if (a[i]>0)
    p++;
   else if(a[i]<0)
   n++;
   else
   z++ ;   
}
printf("positive count %d",p);
printf("\nnegative count %d",n);
printf("\nzero count %d",z);
    return 0;
}

