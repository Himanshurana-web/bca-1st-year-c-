//  Write a program to find the largest of three numbers using nested if.
#include<iostream>
using namespace std;

int main()
{
int a , b , c ;
cout<<"enter the three numbers : "<<endl;
cin>>a>>b>>c;

if(a>b)
{
 if(a>c)
{
 cout<<a<<" is the largest among three "<<endl;   
}
else
{
 cout<<c<< "is the lagrest among three "<<endl;  
}
}
else
{
    if (b>c)
    {
    cout<<b<<"is largest"<<endl;
    }
    else
    {
     cout<<c<<"is largest"<<endl;
    }
}

return 0;
}