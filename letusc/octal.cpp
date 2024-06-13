//program to find the octal number
#include<iostream>
using namespace std;
int main(){
    int n,m,r;
    cout<<"enter a number:-"<<endl;
    cin>>n;
    while(n!=0){
        m=n/8;
        r=n%8;
        n=m;
        cout<<r;
    }
    return 0;
} 