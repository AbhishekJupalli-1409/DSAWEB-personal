//program to  initialize , find the area and  change the length using the different functions

#include<iostream>
using namespace std;
struct rect {
    int l;
    int b;
};

/*pass by reference
void intialization(rect& p) {
    p.l = 10;
    p.b = 5;

}*/

void intialization(rect* p, int length1, int breadth1) { // pass by address
    p->l = length1;
    p->b = breadth1;

}
int area(rect r1) {
    return (r1.l) * (r1.b);
}
void changelength(rect* p, int length2) {
    p->l = length2;
}


int main() {
    struct rect r;
    intialization(&r, 20, 15);
    cout << area(r) << endl;
    changelength(&r, 30);
    cout << r.l << endl << r.b << endl;
    cout << area(r) << endl;
}