//  Write a program to generate Fibonacci series using while loop.
#include<iostream>
using namespace std;

int main()
{
int n , a , b , c ;
a = 0 ;
b = 1 ;
c = 0 ;
cout<<" please enter the number : ";
cin>>n;
while ( c <= n)
{
    cout<<endl<<c<<" ";
    a = b;
    b = c;
    c = a+b;
}
return 0;
}


// ********** for loop ***************

// #include<iostream>
// using namespace std;

// int main()
// {
// int n , a, b ,c ;
// cout<<"enter the number ";
// cin>>n;
// a=0;
// b=1;
// for( c=0 ; c<=n ; c =a+b)
// {
//  cout<<c<<endl;  
// a=b;
// b=c;
// }  
// return 0;
// }