#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x = 0;
    for (int i = 2;; i++)
    {
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
                break;
            else if (j + 1 > sqrt(i))
            {
                cout << i << " ";
                x++;
            }
        }
        if (x == 100)
            break;
    }
    return 0;
}