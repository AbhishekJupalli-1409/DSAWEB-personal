#include<iostream>
using namespace std;
struct rect{
    int length;
    int breadth;
};
int main(){
    struct rect r;
struct rect *p;  //declaring and initialising the pointer// "this is a STATIC OBJECT"
   p= &r; // giving the address to pointer
    r.length=10; // normal variable use '.' operator  // for pointer variable use '->' operator
    r.breadth=6;
    printf("%d",(*p).length)<<endl;// accessing struct using pointer in c
    cout<<p->length;// accessing struct using pointer in c++
    return 0;

}