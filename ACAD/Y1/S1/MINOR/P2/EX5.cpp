#include <iostream>
#include <math.h>
#include <string.h>
#include <cstdlib>
#include <iomanip>
using namespace std;

// Tubig marka ni shantidope

int main() {
    int sum = 0, x;
    cout << "Enter number:";
    cin >> x;
    while (x == 99) {
        sum = sum + x;
        cin >> x;
    }
    cout << "The sum: " << sum << endl;
    return 0;
}