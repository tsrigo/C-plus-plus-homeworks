#include<iostream>
using namespace std;

const int N = 10010;

int n;
int a[N];

int fib(int n){
    if (n <= 1) return n;
    if (a[n]) return a[n];
    return a[n] = fib(n - 1) + fib(n - 2);
}

int main(){
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}