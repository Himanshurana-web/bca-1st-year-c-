// Display Armstrong numbers between 1 and 500

#include <iostream>
using namespace std;

int main()
{
    for (int n = 1; n <= 500; n++)
    {
        int temp = n;
        int sum = 0;

        while(temp>0)
        {
            int r = temp % 10;
            sum = sum + r * r * r ;
            temp = temp / 10;
        }

        if(sum == n  )
            cout << n << " ";
    }

    return 0;
}


