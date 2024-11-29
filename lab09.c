#include<stdio.h>
int main() {
    float radius, side, lenght, breadth;
    float area, perimeter;
    
    //for circle
    printf("enter value of radius of circle\n");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    perimeter=2*3.14*radius;
    printf("area of circle is %f\n",area);
    printf("perimter of circle is %f\n",perimeter);

    //for square
    printf("enter value of side of square\n");
    scanf("%f",&side);
    area=side*side;
    perimeter=4*side;
    printf("area of square is %f\n",area);
    printf("perimeter of square is %f\n",perimeter);

    //for rectangle 
    printf("enter value of lenght and breadth of rectangle\n");
    scanf("%f%f",&lenght,&breadth);
    area=lenght*breadth;
    perimeter=2*(lenght+breadth);
    printf("area of rectangle is %f\n",area);
    printf("perimeter of rectangle is %f\n",perimeter);

    return 0;
}