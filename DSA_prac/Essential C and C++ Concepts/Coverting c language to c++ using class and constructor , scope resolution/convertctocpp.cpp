// converting c program to C++ using class and constructor
//program without using the scope  resolution in c++
#include<iostream>
using namespace std;
class rectangle {
public:
    int l;
    int b;
public:
    rectangle(int length1, int breadth1) {
        l = length1;
        b = breadth1;

    }
    int area() {
        return (l) * (b);
    }
    void changelength(int length2) {
        l = length2;
    }

};

int main() {
    rectangle r{ 10,5 };

    cout << r.area() << endl;
    r.changelength(30);
    cout << r.l << endl << r.b << endl;
    cout << r.area() << endl;
}