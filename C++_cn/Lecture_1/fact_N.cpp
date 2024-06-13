//program to find  N factorial
#include<iostream>
using namespace std;
int main(){
int N,i;
cout<<"Enter the value of N:-";
cin>>N;
i=N-1;
while (i>0)
{
    
    N=N*i;
    i=i-1;
}
cout<<N<<endl;
return 0;

}