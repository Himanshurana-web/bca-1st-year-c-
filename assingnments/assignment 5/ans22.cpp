// Check whether a given number is Harshad number
//********HARSHAD NUMBER CONCEPT*******
//harshad no. ---> an integer that is completely divisible by 
//                   the sum of its own digits in a given base.

// ex.... 81
// 8 + 1 = 9
// 81 % 9 == 0  

#include<iostream>
using namespace std;

int main()
{
int n , temp , sum = 0 , rem; 
cout<<" please enter the number : ";
cin>>n; 
temp = n ; 

while ( n > 0 ) // 18   
{               // 1  
    rem = n % 10 ;  // 8 
                    // 1
    sum = sum + rem;// 0 + 8 = 8 
                    // 8 + 1 = 9 
      n =   n / 10; // 18 / 10 = 1
}                   // 1  / 10 = 0
if ( temp % sum == 0 )
 cout<< temp <<" is a harshad number ";
else 
 cout<< temp <<" is a harshad number ";
return 0;
}