#include<iostream>
using namespace std;
int main(){
    char c='y';
    int n;
    while (c=='y')
    {
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<"square of the number is "<<n*n<<endl;
    cout<<"want to enter another number y/n"<<endl;
    fflush(stdin);
    cin>>c;
    } 
  
    }

    