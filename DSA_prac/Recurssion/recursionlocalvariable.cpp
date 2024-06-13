#include<iostream>
using namespace std;
int  func(int n) {
    if (n > 0) {
        return func(n - 1) + n;

    }
    return 0;
}

int main() {
    int x = 5;
    x = func(x);
    cout << x;
}