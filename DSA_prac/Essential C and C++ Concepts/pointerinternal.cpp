#include<iostream>
using namespace std;
int main(){
    int a;
    int *p=&a; //Declaring  the pointer  //or you can do// int*p=&a;
    a=40; 
 
    cout<<a<<endl;
    cout<<&a<<endl;
     cout<<p<<endl;
      cout<<*p<<endl; ///Accessing the external data using the pointer  deferencing process
      cout<<*(p+1)<<endl; ///Incementing the address and Accessing the external data using the pointer deferencing process
      return 0;
}