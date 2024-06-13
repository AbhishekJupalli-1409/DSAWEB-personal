//program to print whether a number is prime or not 
#include<iostream>
using namespace std;
int main(){                         
    int i=2,N;
    cout<<"enter any number:-";
    cin>>N;

    if(i<N){
    for(;i<N;i++){

        if(N%i==0){
            cout<<"no"<<'\n';
            break;
        }
    
       }
    }
          //if(i==N)
    else
        {
             cout<<"yes"<<'\n';
             
        }
        

    

   
    

    return 0;
}
