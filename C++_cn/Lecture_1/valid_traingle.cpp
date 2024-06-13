//program for a valid triangle 
#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter the value of the side a"<<endl;
cin>>a;
cout<<"Enter the value of the side b"<<endl;
cin>>b;
cout<<"Enter the value of the side c"<<endl;
cin>>c;
if(a+b>c && b+c>a && c+a>b)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;
return 0;




}