// program to show array is used as a  parameter


#include<iostream>
using namespace std;
struct rect {
    int length;
    int breadth;
};
int area(rect& r1) {              //object r1  is created with the same values of r
    return ((r1.breadth) * (r1.length));
}
int main() {
    struct rect r;
    int a;
    r.length = 20;
    r.breadth = 15;
    a = area(r);
    cout << a << endl;
}