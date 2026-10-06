// Write a program to find and print all prime numbers between 1 and N.
#include<iostream>
using namespace std;

int main()
{
int n ;
cout<<" enter the number : ";
cin>> n ;
cout<<endl;
cout<<"************************"<<endl;
cout<<" the prime number are :  ";

for (int num=2; num<=n; num++)
{    
     int count = 0;

    for (int i = 1; i<=num; i++ )
    {
        if (num % i == 0)
        { 
            count++;   

        }
    }
       if ( count == 2 )
       {
        cout<<num<< " " ;
       }
}      
return 0;
}