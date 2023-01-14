  #include <stdio.h>
int main()
{
    int bs,hra=0,da=0,act_sal;
    printf("Enter Your Basic  Salery\n");
    scanf("%d",&bs);
    hra=0.20*bs;
    da=0.4*bs;
    act_sal=hra+da+bs;
    printf("%d",act_sal);
