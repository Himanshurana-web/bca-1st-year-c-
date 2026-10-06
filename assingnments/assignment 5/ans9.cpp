// Demonstrate default case when no matching switch case exists
#include<iostream>
using namespace std;

int main()
{
int choice;
cout<<" enter your fav number between 1-5 : ";
cin>>choice;

switch(choice)
{
 case 1 :
 cout<<"your fav number is 1 ";
 cout<<endl;

 case 2 :
 cout<<"your fav number is 2 ";
 cout<<endl;

 case 3 :
 cout<<" your fav number is 3 "<<endl;

 case 4:
 cout<<" your fav number is 4 "<<endl;

 case 5 :
 cout<<" your fav number is 5  "<<endl;

default:

cout<<" invalid number ";

}
return 0;
}