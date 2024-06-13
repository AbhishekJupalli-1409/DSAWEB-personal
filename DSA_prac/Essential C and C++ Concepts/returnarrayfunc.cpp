//program to print the array  using the void function//array as a parameter

#include<iostream>
using namespace std;
int* func1(int n) { /// Array can only be accessed by addresses may be like ponters
    int* p = new int[n];// we cant use int[] to return array in c++ so we are using pointer

    return p;

}
void func2(int x[], int n) {
    for (int i = 0;i < n;i++) {
        cout << x[i] << " ";

    }
}
int main() {
    int* A = func1(5);
    A[0] = 5;A[3] = 6;
    func2(A, 5);
    delete[] A;
    return 0;
}