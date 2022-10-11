#include<iostream>
class Rectangle2D {
    private:
        double x, y, width, height;
    public:
        Rectangle2D();
        Rectangle2D(double x, double y, double width, double height);
        double getArea();
        bool contains(double x, double y);
        bool contains(const Rectangle2D &r);
        bool overlaps(const Rectangle2D &r);
};

Rectangle2D :: Rectangle2D() {
    this->width = 0;
    this->height = 0;
}

Rectangle2D :: Rectangle2D(double x, double y, double width, double height)
    : x(x), y(y), width(width), height(height)
{}

double Rectangle2D :: getArea() {
    return this->width * this->height;
}

bool Rectangle2D :: contains(double x, double y) {
    return (x > (this->x - width / 2)) && (x < (this->x + width / 2))
        && (y > (this->y - height / 2)) && (y < (this->y + height / 2));
}

bool Rectangle2D :: contains(const Rectangle2D &r) {
    return this->contains(r.x + r.width/2, r.y + r.height/2)
        && this->contains(r.x + r.width/2, r.y - r.height/2)
        && this->contains(r.x - r.width/2, r.y + r.height/2)
        && this->contains(r.x - r.width/2, r.y - r.height/2);
}

bool Rectangle2D :: overlaps(const Rectangle2D &r) {
    Rectangle2D tep = r;
    return this->contains(r.x + r.width/2, r.y + r.height/2)
        || this->contains(r.x + r.width/2, r.y - r.height/2)
        || this->contains(r.x - r.width/2, r.y + r.height/2)
        || this->contains(r.x - r.width/2, r.y - r.height/2)
        || tep.contains(this->x + this->width/2, this->y + this->height/2)
        || tep.contains(this->x + this->width/2, this->y - this->height/2)
        || tep.contains(this->x - this->width/2, this->y + this->height/2)
        || tep.contains(this->x - this->width/2, this->y - this->height/2);
}

int main() {
    Rectangle2D r1(2,2,5.4,4.8);
    Rectangle2D r2(4,5,10.6,3.3);
    Rectangle2D r3(3,5,2.2,5.5);
    std::cout << r1.getArea() << std::endl;
    std::cout << r1.contains(3, 3) << std::endl;
    std::cout << r1.contains(r2) << std::endl;
    std::cout << r1.overlaps(r2) << std::endl;
}