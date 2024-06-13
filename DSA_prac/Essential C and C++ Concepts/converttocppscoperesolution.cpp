//program to  initialize , find the area and  change the length using the different functions

#include<iostream>
using namespace std;
class rect {

public:

    int l;
    int b;
public:

    rect(int length, int breadth);
    int area();
    void changelength(int newlength);
};
/*class is like the blue print..
And we are also storing the length, breadth, rect(),area(),changelength() functions in the same class .
so we can access them using the .operator
class of rect is created from this class we can make different objects
 but in case of structure in c language we have to create variable copies of the structure variable*/



rect::rect(int length, int breadth)
{
    // pass by address
    l = length;
    b = breadth;

}
int rect::area() {
    return (l) * (b);
}
void rect::changelength(int newlength) {
    l = newlength;
}
/*using scope resolutions to write the definitions of the functions outside the class*/


int main() {
    int l1, b1;
    cin >> l1 >> b1;
    rect r{ l1,b1 };
    cout << r.area() << endl;
    r.changelength(30);
    cout << r.l << endl << r.b << endl;
    cout << r.area() << endl;
}