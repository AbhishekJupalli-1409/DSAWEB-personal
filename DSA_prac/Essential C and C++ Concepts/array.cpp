#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main() {
    int A[] = {8, 0, 0, 0, 5}; // Initialize array A with required values
    int B[5] = {0};
    int C[] = {2, 3, 4, 4, 0}; // Initialize array C with required values
    
    cout << sizeof(A) << endl;
    cout << A[4] << endl;

    printArray(A, 5):
    printArray(B, 5);
    printArray(C, 5);
   

    return 0;
}