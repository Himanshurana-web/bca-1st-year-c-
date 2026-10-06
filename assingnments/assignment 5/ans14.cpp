// Write a program to check whether a given number is Armstrong or not
// armstrong concept 
//------>  1 5 3 = 1*1*1 + 5*5*5 + 3*3*3

// *******************************

#include<iostream>
using namespace std;

int main()
{
int n,sum=0 , r , temp;
cout<<" enter the number : ";//153
cin>>n;
temp=n;//153
while (n>0)
{
r = n % 10;//153 % 10 = 3 
           //15  % 10 = 5
           //1   % 10 = 1
//**********************          
sum = sum + r*r*r;  //0   + 3*3*3 = 27  
                    //27  + 5*5*5 = 152 
                    //152 + 1*1*1 = 153
//************************** */

n = n/10; // 153/10 = 15 
          // 15/ 10  = 1 
}
if (temp==sum)
{
    cout<<"number is armstrong ";
}
else
{
    cout<<" number is not armstrong ";
}
return 0;
}

