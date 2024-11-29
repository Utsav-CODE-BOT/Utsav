#include<stdio.h>
int main() {
     float radius, lenght , breadth , side;
     float area , perimeter;
      
    // for circle
    radius = 4;
    area=3.14*radius*radius;
    perimeter=2*3.14*radius;
    printf("radius of circle is %f\n", radius);
    printf("area of circle is %f\n", area);
    printf("perimeter of circle is %f\n", perimeter);

    // for square
    side=5;
    area=side*side;
    perimeter=4*side;
    printf("side of square is %f\n", side);
    printf("area of square is %f\n", area);
    printf("perimeter of square is %f\n", perimeter);

    // for rectangle
    lenght=4.2;
    breadth=3.8;
    area=lenght*breadth;
    perimeter=2*(lenght+breadth);
    printf("lenghth of rectangle is %f\n",lenght);
    printf("breadth of rectangle is %f\n",breadth);
    printf("area of rectangle is %f\n",area);
    printf("perimeter of rectangle is %f\n",perimeter);

    return 0;


}