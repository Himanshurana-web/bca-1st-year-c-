// display all harshad number between 1 and 100 

#include <iostream>
using namespace std;

int main()
{
    for (int n = 1; n <= 100; n++)
    {
        int temp = n; // 81 // 33
        int sum = 0;

        while (temp > 0)
        {
            sum = sum + temp % 10; // 0 + 1 = 1 // 0 + 3 = 3
                                // 1 + 8 = 9 // 3 + 3 = 6 
            temp = temp / 10;
        }

        if (n % sum == 0) // 81 % 9 == 0  // 33 % 6 == 5.5( not a harshad number )
            cout << n << " ";
    }

    return 0;
}