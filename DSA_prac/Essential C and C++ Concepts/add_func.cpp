//program to find the sum of two numbers using the add function

#include<iostream>
using namespace std;
int add(int a, int b) {// formal parameters
    int c;
    c = a + b;
    return(c);
}

int main() {
    int x, y, z;
    cout << "Enter two numbers :-" << endl;
    cin >> x >> y;
    z = add(x, y);  // actual parameters
    cout << "Sum of given two numbers is" << " " << z << endl;
    return 0;
}