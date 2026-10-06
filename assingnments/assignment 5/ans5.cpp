// Write a program to simulate a menu-driven calculator with default in switch
#include<iostream>
using namespace std;

int main()
{
    cout<<" 1. add "<<endl;
    cout<<" 2. subtraction "<<endl;
    cout<<" 3. multiplication "<<endl;
    cout<<" 4. divison "<<endl;
    int choice;
    cout<<" enter your choice : ";
    cin>>choice;
    float a , b ;
cout<<endl<<" enter the two number : ";
cin>>a>>b;
switch(choice)
{
  {
        case 1:
            cout << "result = " << a + b;
            break;

        case 2:
            cout << "result = " << a - b;
            break;

        case 3:
            cout << "result = " << a * b;
            break;

        case 4:
            cout << "result = " << a / b;
            break;

        default:
            cout << "invalid choice";
    }
}
return 0;

}