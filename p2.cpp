#include <iostream>
using namespace std;

int main() {
    int choice;
    float temp;

    cout<< "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temp;

    switch(choice) {
        case 1:
            cout << "Fahrenheit = " << (temp * 9/5) + 32;
            break;
        case 2:
            cout << "Celsius = " << (temp - 32) * 5/9;
            break;
        default:
            cout << "Invalid Choice";
    }
    return 0;
}