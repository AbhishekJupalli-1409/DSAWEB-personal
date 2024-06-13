// program to find the greatest of N numbers

#include<iostream>
using namespace std;
int main(){
int i=2,max,cnum,N,nnum;
cout<<"enter the value of number of digits"<<endl;
cin>>N;
cout<<"enter the value of number 1"<<endl;
cin>>cnum;
max=cnum;
while(i<=N){

cout<<"enter the value of num "<<i<<endl;
cin>>nnum;

if(max>nnum){
    max=max;
}
else{
    max=nnum;
}
i=i+1;

}
cout<<" the greatest numbers is"<<endl<<max<<endl;
return 0;
}