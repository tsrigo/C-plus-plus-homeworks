#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
    private:
        double width;
        double height;
    public:
    Rectangle();
    Rectangle(double width, double height);
    void setwh(double, double);
    double getw();
    double geth();
    double getArea();
    double getPerimeter();
};

#endif