/*to use array in structure as a parameter and acessesing it by call by value..
Actually array can only be acessed by address but if we put it inside a structure we can acess it by call by value*/

#include<iostream>
using namespace std;
struct new_obj {
    int A[20];
    int b;
};

void func2(int X[], int n1) {
    for (int i = 0;i < n1;i++) {
        cout << X[i] << "  ";
    }
}

int func1(new_obj n1) {
    n1.A[1] = 99;
    n1.A[6] = 55;
    func2(n1.A, 20);

}


int main() {
    struct new_obj n;
    n = { { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19 }, 5 };
    /*Yes, I can explain this in more detail.

    In the code, the line n.A[20] = { 1,2,3,...,19 }; is attempting to assign values to the array n.A using an assignment statement. However, arrays cannot be assigned values like this in C++. Instead, you should use curly braces {} to initialize the array when declaring it.

    For example, in the corrected code that I provided earlier:

    Diff
    Copy
    Insert
    New
    new_obj n { {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19}, 5};
    Here, you can see that curly braces are used to initialize the A member of the new_obj struct with the values from 1 to 19. This is the correct way to initialize an array in C++.

    Using curly braces when initializing an array has several advantages over using an assignment statement. The main advantage is that curly braces allow you to initialize the array with a fixed set of values at the time of declaration, which makes your code more concise and easier to read.

    I hope this explanation helps!*/

    func1(n);
}