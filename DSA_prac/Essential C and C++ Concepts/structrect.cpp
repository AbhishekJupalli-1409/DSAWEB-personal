#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main(){
 struct rectangle r={1,2};
 struct rectangle m={4,5};
 cout<<"Area of the first rectangle is "<<r.length*r.breadth<<endl;
 cout<<"Area of the second rectangle is "<<m.length*m.breadth<<endl;
 
return 0;
}