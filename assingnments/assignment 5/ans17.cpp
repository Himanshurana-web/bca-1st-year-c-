// Display all perfect numbers between 1 and 100
#include<iostream>
using namespace std;

int main()
{
for ( int n = 1 ; n <= 1000 ; n++ )
 {  
   int sum = 0 ;
   for (int i = 1 ; i < n ; i++)
   {
    if ( n % i == 0)
    
     sum = sum + i ;  
   }
if ( sum == n && sum > 0 )
  cout<<" perfect number "<< n <<endl;
 else 
 cout<<" not a perfect number "<<endl; 
 }
return 0;
}