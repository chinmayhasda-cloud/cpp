// print all prime number between given interval

#include <iostream>
using namespace std;
void prime(int a, int b)
{
    int count = 0;
    int min;
    int max;
    if (a < b)
    {
        min = a;
        max = b;
    }
    else
    {
        min = b;
        max = a;
    }

    cout << " prime number between " << min << " and " << max << " are \n ";
    for (int i = min; i < max; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count += 1;
            }
        }
        if (count == 2)
        {
            cout << i << "  ";
        }
    }
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    prime(n1, n2);

    return 0;
}