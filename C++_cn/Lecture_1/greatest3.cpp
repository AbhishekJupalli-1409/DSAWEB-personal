//program to find the greatest of three numbers
#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter the value of a"<<endl;
cin>>a;
cout<<"Enter the value of b"<<endl;
cin>>b;
cout<<"Enter the value of c"<<endl;
cin>>c;
if (a>b && a>c)
cout<<" A is the biggest"<<endl;
if (b>c && b>a)
cout<<" B is the biggest"<<endl;
else
cout<<" C is the biggest"<<endl;
return 0;



}