//Write a program to search for a number in a sequence; stop searching if found (break). 

#include<iostream>
using namespace std;

int main()
{
int arry[]={1,2,3,4,7,5,6};
int target;
cout<<"enter the number to search "<<endl;
cin>>target;
bool found= false;
for(int i = 0 ; i<7; i++)
{
 if (arry[i]==target)
 {
  cout<<" number found "<<endl;  
  found = true;
  break;
 }
}
 if(found)
 {
   cout<<"number found ";
 }
 else
 {
    cout<< " not found ";
 }
 return 0;
}


 