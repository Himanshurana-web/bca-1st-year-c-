// Reverse a number and check if it is palindrome
#include<iostream>
using namespace std;

int main()
{
int n , temp , reverse = 0 ; 
cout<<" enter the number : ";
cin>>n ; 

temp = n ; 

while ( temp > 0 )
{

int digit = temp % n ;
reverse = reverse * 10 + digit ;
temp = temp / 10;
}
cout<<endl<<" reverse = "<<reverse<<endl;   
if( reverse == n  )
{
    cout<<" number is palindrome "<<endl;
}
else
{
    cout<<" number is not palindrome"<<endl;
}
return 0;
}