#include<stdio.h>
#include<math.h>

int main() {
    float x1, y1 ,x2, y2;
    float distance;
    printf("enter value of x1 and y1\n");
    scanf("%f%f",&x1, &y1);
    printf("enter value of x2and y2\n");
    scanf("%f%f",&x2, &y2);
    distance=sqrt((x2-x1)*( x2-x1)+(y2-y1)*(y2-y1));
    printf("euclidean distance is %f",distance);
    return 0;



}