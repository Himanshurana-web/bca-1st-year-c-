//  Write a program to calculate factorial of a number using while loop
#include<iostream>
using namespace std;

int main()
{
int n;
int factorial=1;
cout<<"pls enter an number : ";
cin>>n;
while (n>=1)
{
 factorial=factorial*n;
 n=n-1;
}
cout<<endl<<" fatcorial of a number is : "<<factorial;
return 0;
}