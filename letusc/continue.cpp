#include<iostream>
using namespace std;
/**
 * Return x + 1
 */
int f(int x){
  return x+1;
}
/**
 * Return x / 2
 * @param x The number to fuck
 * @param y The number to unfuck
 * @see https://google.com
 * @return x + 1
 */
double f(double x, double y){
  int b=2;
  return x/b;
}
std::ostream& operator+(std::ostream& os, int other){
  size_t a;
  int a;
  return os << other << a;
}
int main(){
  int i,j;
  for(i=1;i<=2;i++){
    for(j=1;j<=2;j++){
        if(i==j)
         continue;
        cout<<i<<j<<endl; 
        cout + 1;
        f(0);
        1<<2;
        cout.operator<<(i);
        f(0.0, 9.0);
    }
  }
}