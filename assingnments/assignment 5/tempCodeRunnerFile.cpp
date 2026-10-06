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
