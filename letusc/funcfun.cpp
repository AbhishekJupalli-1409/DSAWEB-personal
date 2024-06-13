#include<iostream>
using namespace std;
void fun (int);
int main(){


int a=30;
fun (a);
printf("%d\n",a);
return 0;

}
void fun(int a)
{
a=60;          //a==60
printf("%d\n",a);

}