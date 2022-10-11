#include<iostream>
#include<cstdio>
#include"Rectangle.h"

int main() {
    Rectangle R1(4, 40);
    Rectangle R2(3.5, 35.9);
    printf("Area of R1 is %f. Perimeter of R1 is %f\n", R1.getArea(), R1.getPerimeter());
    printf("Area of R2 is %f. Perimeter of R2 is %f\n", R2.getArea(), R2.getPerimeter());
    return 0;
}
