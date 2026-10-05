// Write a program to check whether a number is positive or negative
#include<iostream>
using namespace std;

int main()
{
int a;
cout<<"pls enter the number = "<<endl;
cin>>a; 

if(a>=0)
{
    cout<<" positive number ";
}
else if(a<0)
{
    cout<<" negative number";
}
return 0;
}