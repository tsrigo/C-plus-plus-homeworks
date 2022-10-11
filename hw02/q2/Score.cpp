#include<IOSTREAM>
class Score {
    private:
        float math;
        float eng;
    public:
        Score(float math, float eng)
            : math(math), eng(eng)
        {}
        void show();
};

void Score :: show() {
    std::cout << this->math << " " << this->eng << std::endl;
}

class Student {
    private:
        int stuid;
        Score mark;
    public:
        Student(int stuid, float math, float eng)
            : stuid(stuid), mark(math, eng)
        {}
        void stushow();
};

void Student :: stushow() {
    std::cout << this->stuid << " ";
    this->mark.show();
}

int main() {
    Student stu(2017007, 98, 85);
    stu.stushow();
}
