//program to print even numbers ut
#include<iostream>
using namespace std;
int main(){
    int i=1,N;
    cout<<"Enter the  value of N:-"<<endl;
    cin>>N;
    while(i<=N){
    if(i%2==0)
    {
        cout<<i<<endl;
    }
    i=i+1;
    }
    return 0;
}