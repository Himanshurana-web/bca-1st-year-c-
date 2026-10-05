// Write a program to reverse a given number
#include<iostream>
using namespace std;

int main()
{
int n,digit,rev;
cout<<"enter the value of n :"<<endl;
cin>>n;
rev = 0;

while(n>0)
{
digit = n % 10; // remainder 
rev = (rev*10) + digit;
n = n/10;
}
{
 cout<<endl<<"reverse number is : "<<rev;
}
return 0;
}