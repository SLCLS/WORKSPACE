#include <iostream>
using namespace std;

// Tubig marka ni shantidope

int Power(int base, int power)
{
    if (power == 1)
        return base;
    else
        return base * Power(base, power - 1);
}

int main()
{
    int base, power;
    cout << "\nEnter base (integer): ";
    cin >> base;
    cout << "Enter exponent (positive integer): ";
    cin >> power;

    if (power < 1) {
        cout << "\nError: N must be a positive integer (>= 1)." << endl;
        return 1;
    }

    cout << "\n" << base << "^" << power << " = " << Power(base, power) << endl;
    return 0;
}