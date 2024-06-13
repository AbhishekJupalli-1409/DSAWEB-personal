// program to print the numbers upto N
#include<iostream>
using namespace std;
int main(){
int i=1,N;
cout<<"enter upto which digit u want the output:-"<<endl;
cin>>N;
while(i<=N)
{
    cout<<i<<endl;
    i=i+1;
}
return 0;
}