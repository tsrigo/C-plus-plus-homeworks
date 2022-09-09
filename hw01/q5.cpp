#include<iostream>
using namespace std;

const int N = 10010;

int n;
int a[N];

void swapA(double &a, double &b){
    double tep = a;
    a = b;
    b = tep;
}

void swapB(double *a, double *b){
    double tep = *a;
    *a = *b;
    *b = tep;
}

int main(void){
    double a, b;
    cin >> a >> b;
    swapA(a, b);
    cout << a << " " << b << endl;
    swapB(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}