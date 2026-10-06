// Write a program to count positive numbers entered by the user until 0 is entered (break)
#include <iostream>
using namespace std;

int main()
{
int n,count = 0;

while (true)
    {
        cout << "enter number: ";
        cin >> n;

        if(n == 0)
            break;

        if(n > 0)
        count++;
    }

cout << "positive numbers = " << count;

return 0;
}