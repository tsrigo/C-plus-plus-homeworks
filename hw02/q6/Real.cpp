#include<IOSTREAM>
class Real {
    protected:
        float x;
    public:
        Real();
        Real(float x)
            : x(x)
        {}
        virtual void Display() = 0;
};

Real :: Real() {
    this->x = 0;
}

void Real :: Display() {
    std::cout << this->x << std::endl;
}

class Rational: public Real {
    private:
        int x;
        int y;
    public:
        Rational();
        Rational(int x, int y)
            : Real(x / y), x(x), y(y)
        {}
        void Display();
};

Rational :: Rational() {
    this->y = 1;
}

void Rational :: Display() {
    std::cout << this->x << "/" << this->y << std::endl;
}

class Complex: public Real {
    private:
        float x;
        float y;
    public:
        Complex();
        Complex(float x, float y)
            : Real(x), x(x), y(y)
        {}
        void Display();
};

Complex :: Complex() {
    this->y = 0;
}

void Complex :: Display() {
    std::cout << this->x << "+" << this->y << "i" << std::endl;
}

int main() {
    Rational rat(9, 19);
    Complex com(3.14, -2.78);
    rat.Display();
    com.Display();
}