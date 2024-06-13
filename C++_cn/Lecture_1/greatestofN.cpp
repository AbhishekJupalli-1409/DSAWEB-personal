// program to find the greatest of N numbers
//After studying everything finish the code 

#include<iostream>
using namespace std;

int maxi(int x, int y) {
   if (x > y) {
      return x;
   }
   else
      return y;

}



int main() {
   int max, N = 0, E[N];
   cout << "enter the value of number of digits" << endl;
   cin >> N;
   cout << "enter the value of the" << N << " Numbers in order:-" << endl;

   for (int i = 0;i < N;i++) {
      cin >> E[i];
   }

   for (int i = 1;i < N;i++) {
      max = E[0];
      max = maxi(max, E[i]);

   }
   cout << "maximum number is" << " " << max << endl;
   return 0;
}

