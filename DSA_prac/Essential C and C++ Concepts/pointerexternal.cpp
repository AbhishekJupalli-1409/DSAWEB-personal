#include<iostream>
using namespace std;
int main() {

    int* p; //Declaring  the pointer  
    p = new int[5];  // Intialising the pointer by the external memory address
    p[0] = 55;  //assigning the values at external memory address
    p[1] = 45;
          
    cout << p << endl;
    cout << *p << endl; ///Accessing the external data using the pointer  deferencing process
    cout << *(p + 1) << endl; ///Incementing the address and Accessing the external data using the pointer deferencing process
    delete p; // T prevent the memory leaking
    return 0;
}