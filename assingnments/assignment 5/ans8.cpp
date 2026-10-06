// multiplication table; stop when product exceeds 50
#include<iostream>
using namespace std;

int main()
{
int i ;
cout<<" enter a number for multiplication table : ";
cin>>i;
for ( int n = 1; n<=10; n++ )
{
    int product = i*n;
    if( product < 50 )
    break;

    cout<<i<<" x "<<n<<" = "<<product<<endl;
}
return 0;
}