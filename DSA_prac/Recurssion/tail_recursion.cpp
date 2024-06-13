#include<iostream>
using namespace std;

//tail recursion means at returning time it doesn't have to perform anything
//function call willbe at ending
/*every recursion can be converted into loops and every loop can be converted in recursion
time taken by both of them is same
but space taken in tail recursion is more bcoz it takes more activation records*/
// so for loop is more efficient than the tail recursion
void  func(int n) {
    if (n > 0) {
        cout << n << " ";
        func(n - 1);
    }
}


int main() {
    int x = 3;
    func(x);
    return 0;

}