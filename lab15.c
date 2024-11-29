#include<stdio.h>
#include<math.h>

int main() {
    int number, x, r, result = 0, n = 0;
    printf("\n\n\t\t\t check whether an n digits number is armstrong or not \n");
    printf("enter a number \n");
    scanf("%d",&number);
    x = number;
    while(x !=0)
    {
        x=x/10;
        n++;
    }
    x=number ;
    while (x !=0)
    {
        r= x %10;
        result = result + pow(r,n);
        x =x/10;
    }
    if(result==number) {
    printf("%d is an armstrong number \n", number);
    }
    else {
    printf("%d is not an armstrong number \n", number);
    }
    return 0;
    

}