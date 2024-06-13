#include<iostream>
using namespace std;


// to use global variable remove the static and enter below line// static and global variables create only a single copy
//int x=0
int  func(int n) {
    static int x = 0;
    if (n > 0) {
        x++;
        return func(n - 1) + x;

    }
    return 0;
}

int main() {
    int r = 5;
    r = func(r);
    cout << r;
}