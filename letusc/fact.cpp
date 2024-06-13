//program to find the factorial of any number
#include<iostream>
using namespace std;
int main(){
    int i=1,N,F;
    cout<<"enter the value of N"<<endl;
    cin>>N;
    while(i<N){
        F=N*i;
        i++;
    }
    cout<<F<<endl;
    return 0;
}