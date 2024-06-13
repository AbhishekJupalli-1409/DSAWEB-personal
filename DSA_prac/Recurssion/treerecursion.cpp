#include<iostream>
using namespace std;
void func(int n)
{
    if (n > 0) {
        cout << n << " ";
        func(n - 1);
        func(n - 1);
    }
    return;
}




int main() {
    int x = 3;
    func(x);
}