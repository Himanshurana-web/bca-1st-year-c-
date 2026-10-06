// Print prime factors of a given number
#include<iostream>
using namespace std;

int main()
{
int n ; 
cout<<" please enter the number : " ; 
cin>>n;  // 60 // 30 // 10 // 2
cout<<" prime numbers are : ";

for ( int i = 2 ; i<=n ; i ++ )
 { 
while (n % i == 0) // 60 % 2 = 0 // 30 % 3 == 0 // 10 % 4 !=0 // 10 % 5 == 0 //2 % 6 = 0    
        {
            cout << i << " ";  // 2 // 3 // 5 // 6
            n = n / i;  // 60 / 2 = 30 // 30 / 3 = 10 // 10 /5 = 2 // 2/6 = 0   
        }
 }

return 0;
}