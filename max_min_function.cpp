#include <iostream>
using namespace std;

int max_min(int n, int m)
{
    if (n > m)
    {
        cout << "max    "<< n << "\n";
        cout << "min    "<< m << "\n";
    }
    else
    {
        cout << "max     "<<m<< "\n";
        cout << "min     "<<n<< "\n";
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    max_min(a, b);
    return 0;
}