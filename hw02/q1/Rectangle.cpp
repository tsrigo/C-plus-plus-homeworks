#include"Rectangle.h"

Rectangle :: Rectangle() {
    this->width = 1;
    this->height = 1;
}
Rectangle :: Rectangle(double width, double height) {
    this->width = width;
    this->height = height;
}

void Rectangle:: setwh(double width, double height) {
    this->width = width;
    this->height = height;
}
double Rectangle:: getw() {
    return this->width;
}
double Rectangle::geth() {
    return this->height;
}
double Rectangle::getArea() {
    return this->height * this->width;
}
double Rectangle::getPerimeter() {
    return (this->height + this->width) * 2;
}
