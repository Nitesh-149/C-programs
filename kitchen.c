#include <stdio.h>

int main(void) {
int t;
scanf("%d",&t);
while(t--){
    int a,b,final_time;
    scanf("%d %d",&a,&b);
    final_time=b-a;
    printf("%d\n",final_time);
}
return 0;
}