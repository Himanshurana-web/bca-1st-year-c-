// Read numbers until -1; skip negative numbers using continue
#include<iostream>
using namespace std;

int main()
{
int n;    
while (true )
{
    cout<<" pls enter a number : ";
    cin>>n;
    
    if( n > 0 )
    continue;
    
    if( n == -1 )
    break;

    cout<<" you entered :  "<<n<<endl;
 }
    return 0;
}