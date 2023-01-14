#include<stdio.h>
int main()
{
    int i,n,a[100];
printf("Input no. of element in array");
scanf("%d",&n);
printf("Input %d element in array",n);
for(i=0;i<n;i++)
{
    printf("elements %d",i);
    scanf("%d",&a[i]);
}
printf("value stored in aarray inn revrseorder\n");
for(i=n-1;i>=0;i--)
{
    printf("%d\n",a[i]);
}
    return 0;
}
