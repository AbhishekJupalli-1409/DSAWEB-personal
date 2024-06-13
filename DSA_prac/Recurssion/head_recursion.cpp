#include<iostream>
using namespace std;
//head recursion means at starting time it doesn't have to perform anything
//function call will be at starting

void  func(int n) {
    if (n > 0) {
        func(n - 1);
        cout << n << " ";
    }
}


int main() {
    int x = 3;
    func(x);
    return 0;

}