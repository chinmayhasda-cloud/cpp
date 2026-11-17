#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    if(a == 0) {
        cout << "Not a quadratic equation";
        return 0;
    }

    d = b * b - 4 * a * c;

    switch((d > 0) ? 1 : (d == 0) ? 2 : 3) {
        case 1:
            cout << "Root 1 = " << (-b + sqrt(d)) / (2*a);
            cout << "\nRoot 2 = " << (-b - sqrt(d)) / (2*a);
            break;

        case 2:
            cout << "Equal roots = " << -b / (2*a);
            break;

        case 3:
            cout << "Root 1 = " << -b/(2*a) << " + "
                 << sqrt(-d)/(2*a) << "i";
            cout << "\nRoot 2 = " << -b/(2*a) << " - "
                 << sqrt(-d)/(2*a) << "i";
            break;
    }

    return 0;
}