//  Find the sum of all even and odd digits in a number....


#include<iostream>
using namespace std;

int main()
{
int evensum = 0, oddsum =0;
int n , digit ;
cout<<" please enter a numbers : ";
cin>>n;
while( n > 0 ) // 2 // 4
{              

digit = n % 10 ;// 2 // 4

if ( digit % 2 == 0 )
evensum = evensum + digit; // 2 // 2 + 4 
else 
oddsum = oddsum + digit;

 n = n / 10 ; // 0 // 0    
    
}

cout<<" sum of the even number is : "<<evensum<<endl;
cout<<" sum of the odd numbers  is : "<<oddsum<<endl;

return 0;
}