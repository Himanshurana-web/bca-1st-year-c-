// Check whether a number is a Strong Number

//*****************strong numbers concept**************
// a number whose factorial sum is equal to the itselves....
// example....145 
// 145 = 1! = 1 
//       4! = 4*3*2*1   = 24
//       5! = 5*4*3*2*1 = 120
// 145 = 1+24+120 

#include<iostream>
using namespace std;

int main()
{
int n, f, fact,temp, sum= 0; 
cout<<" enter the number : ";
cin>> n;
temp = n ; 
while ( n > 0 )
{   
     // calaculating factorial

    f = n % 10 ; // 145 % 10 = 5
                 // 14  % 10 = 4
                 // 1   % 10 = 1
    

fact = 1 ;        
 for ( int i = 1 ; i<=f; i++)
 {
    fact= fact* i ;
 }
    cout<<" factorial "<<fact<<endl;
    sum = sum + fact ; 
    cout<<" sum "<<sum<<endl; 
    n = n / 10 ; // 145 / 10 = 14
                 // 14  / 10 = 1
                 // 1   / 10 = 0 ( condition false ) 
}
if ( sum == temp )
cout<<endl<<" given number is strong number ";

else 

cout<<endl<< " given number is not strong number  ";
return 0;
}