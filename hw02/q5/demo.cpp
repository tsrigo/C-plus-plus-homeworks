#include<IOSTREAM>
#include<STRING>
using namespace std;

class Person {
    private:
        string name;
        string id;
    public:
        Person(const string &name, const string &id)
            : name(name), id(id)
        {}
        void Display();
};

void Person :: Display() {
    cout << this->name << " " << this->id << endl;
}

class Student: public Person {
    private:
        string classroom;
        int score;
    public:
        Student(const string &name, const string &id, const string &classroom, int score)
            : Person(name, id), classroom(classroom), score(score)
        {}
        void Display();
};

void Student :: Display() {
    Person::Display();
    cout << this->classroom << " " << this->score << endl;
}

class Teacher: public Person {
    private:
        string title;
        string department;
    public:
        Teacher(const string &name, const string &id, const string &title, const string &department)
            : Person(name, id), title(title), department(department)
        {}
        void Display();

};

void Teacher :: Display() {
    Person::Display();
    cout << this->title << " " << this->department << endl;
}

int main() {
    Student stu("John", "2017007", "CS", 98);
    Teacher tea("Mary", "2017008", "Professor", "CS");
    stu.Display();
    tea.Display();
}