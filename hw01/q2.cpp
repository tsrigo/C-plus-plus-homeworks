#include<iostream>
using namespace std;

const int N = 10010;

int n;
int a[N];

void swap(int &a, int &b){
    int tep = a;
    a = b;
    b = tep;
    return;
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i ++ ) cin >> a[i];

    for (int i = 0; i < n; i ++ ){
        for (int j = i + 1; j < n; j ++ ){
            if (a[j] < a[i]) {
                swap(a[j], a[i]);
            }
        }
    }

    for (int i = 0; i < n; i ++ ) cout << a[i] << ' ';
    return 0;  
}