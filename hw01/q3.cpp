#include<iostream>
using namespace std;

const int N = 10010;

int n;
int a[N];

bool check(int x){  // 试除法
    if (x < 2) return false;

    for (int i = 2; i <= x / i; i ++ ){
        if (x % i == 0) return false;
    }
    return true;
}

int main(){
    cin >> n;
    cout << check(n) << endl;
    return 0;
}