#include<stdio.h>
int main() {
    int a,b,sum,sub,div,mul;
    printf("enter two numbers\n");
    scanf("%d%d", &a,&b);
    // addition of two numbers
    sum=a+b;
    printf("addition of two numbers is %d\n",sum);
    // subtraction of two numbers
    sub=a-b;
    printf("subtraction of two numbers is %d\n", sub);
    //division of two numbers
    div=a/b;
    printf("division of two numbers is %d\n", div);
    // multiplication of two numbers
    mul=a*b;
    printf("multiplication of two numbers is %d\n", mul);
    return 0;

}