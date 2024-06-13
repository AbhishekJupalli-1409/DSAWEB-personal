// program to find the dum of the N numbers
#include<iostream>  //including the library
using namespace std;  // using the std namespaces
int main(){          //using the main function
    int sum=0,N,i=1; // declaring the local variables sum, N,i
    cout<<"enter the value on N:-"<<endl; //using the cout function to print the output/ to take the input N
    cin>>N;   // take the input from the user and store it in N
    while(i<=N){  //forming  a while  loop which iterates upto n
        
        sum=sum+i;  // adding the sum variable with the iterator
        i=i+1; // incrementing the iterator i
        
    }cout<<sum; //printing the overall sum
    return 0;
}