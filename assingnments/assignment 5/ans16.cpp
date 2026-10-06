// Check whether a number is perfect number.

//***********************************/
//  1: Find all numbers that can cleanly divide 6. They are 1, 2, 3, and 6.
//  2: Exclude the number itself (6). The remaining divisors are 1, 2, and 3.
//  3: Add them together: 1 + 2 + 3 = 6.
#include<iostream>
using namespace std;

int main()
{
int n , sum =  0 ; 
cout<<" enter the number pls : ";   // 6
cin>>n;
cout<<endl;
for(int i = 1 ; i < n ; i++ ) 
{
  if(n % i == 0 )       // 6 % 1 = 0
                        // 6 % 2 = 0  
                        // 6 % 3 = 0
                        // 6 % 4 = 2 ( not count )
                        // 6 % 5 = 1 ( not count )

  {
    sum = sum + i;      // 0 + 1 = 1
                        // 1 + 2 = 3
                        // 3 + 3 = 6
  }  
}
 if ( sum == n )
  cout<<" entered number is a positive number ...";
  
else
  cout<<" enter number is not a perfect number " ;
return 0;
}