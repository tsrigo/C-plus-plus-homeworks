#include<IOSTREAM>
#include<string>
using namespace std;

class Employee {
    protected:
        string name;
        string addr;
        string city;
        string zip;
    public:
    Employee(const string &name, const string &addr, const string &city, const string &zip)
        : name(name), addr(addr), city(city), zip(zip)
    {}
    void ChangeName(const string &name);
    void Display();
};

void Employee :: ChangeName(const string &name) {
    this->name = name;
}

void Employee :: Display() {
    cout << this->name << " " << this->addr << " " << this->city << " " << this->zip << endl;
}

int main() {
    Employee emp("John", "123 Main St", "New York", "10001");
    emp.Display();
}