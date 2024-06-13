//program to print the array  using the viod function//array as a parameter

#include<iostream>
using namespace std;
void func(int y[], int n) { /// Array can only be accessed by addresses may be like ponters
    

    for (int i = 0;i < n;i++) {
        cout << y[i] << "  ";

    }

}
int main() {

    int A[5] = { 1,2,3,4,5 };
    func(A, 5);

    return 0;
}