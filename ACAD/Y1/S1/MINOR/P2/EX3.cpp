#include <iostream>
#include <math.h>
#include <string.h>
#include <cstdlib>
#include <iomanip>
using namespace std;

// Tubig marka ni shantidope

int main()
{
    int n, asterisk = 1;
    cout << "Enter a number: ";
    cin >> n;
    while (asterisk <= n) {
        cout << "*";
        ++asterisk;
    }
    cout << endl;
    return 0;
}