#include<iostream>
#include<cmath>
using namespace std;

class Complex{
    private:
        double x;
        double y;

    public:
        Complex(double a, double b){
            this->x = a;
            this->y = b;
        }

        double getX(){
            return x;
        }

        double getY(){
            return y;
        }

        void Display(){
            if (y > 0)
                printf("%f+%fi\n", x, y);
            else
                printf("%f%fi\n", x, y);
        }

        double Abs(){
            return sqrt(x*x + y*y);
        }

        Complex Minus(Complex &o){
            return Complex(this->x - o.x, this->y - o.y);
        }

        Complex Multiply(Complex &o){
            double nx = this->x * o.x - this->y * o.y;  // ac - bd
            double ny = this->y * o.x + this->x * o.y;  // bc + ad
            return Complex(nx, ny);
        }
};

int main(){
    Complex z1 = Complex(1.4, 2.3), z2 = Complex(-3.5, 2.7);
    // z1.Display();
    // z2.Display();
    printf("%f\n", z1.Abs());
    Complex z3 = z1.Minus(z2);
    z3.Display();

    Complex z4 = z1.Multiply(z2);
    z4.Display();
    return 0;
}