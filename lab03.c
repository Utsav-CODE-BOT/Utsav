#include<stdio.h>
int main() {

    int a,b,c,max;
    printf("enter three values\n");
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if(max<b) {
        max=b;
    }
    if(max<c) {
        max=c;
    }
    printf("max is %d", max);
    return 0;
    
}