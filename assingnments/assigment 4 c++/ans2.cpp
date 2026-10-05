// Write a program to check whether a number is even or odd
#include<iostream>
using namespace std;

int main()
{
int a ;
cout<<"pls enter the number "<<endl;
cin>>a;

if ( a%2==0)
{ 
    cout<<" even number "<<endl;
}
else if ( a%2!=0 )
{
    cout<<"odd number ";
}
return 0;
}