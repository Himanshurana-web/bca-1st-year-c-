// Display all Strong numbers between 1 and 500

#include <iostream>
using namespace std;

int main()
{
    for (int n = 1; n <= 500; n++)
    {
        int temp = n;  //145
        int sum = 0;

        while (temp > 0)
        {
            int digit = temp % 10; // 145 % 10 = 5
            int fact = 1;

            for (int i = 1; i <= digit; i++)
            {
                fact = fact * i; // 1 * 1  = 1    // 2 * 3 = 6   // 24 * 5 = 120 
            }                    // 1 * 2  = 2    // 6 * 4 = 24 

            sum = sum + fact; // 0 + 120  
            temp = temp / 10; // 145 / 10 = 14 
        }

        if (sum == n)
            cout << n << " ";
    }

    return 0;
}