// Write a program to check if a number is prime, terminate loop early using break.
#include <iostream>
using namespace std;

int main()
{
    int n;
    bool prime = false;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 1)
    {
        prime = true;

        for (int i = 2; i < n; i++)
            // i = 2
            // i = 3
            // i = 4..........
            // i = 16
        {
            if (n % i == 0)
            // example:
            // 17 % 2 = 1
            // 17 % 3 = 2
            // 17 % 4 = 1
            // kisi ka remainder 0 nahi aaya.
            // so 17 ke paas 1 aur 17 ke alawa koi factor nahi hai.
            {
                prime = false;
                break;
            }

        }
        
    }

    if (prime)
    {
        cout << "prime number";
    }
    else
    {
        cout << "not a prime number";
    }

    return 0;
}