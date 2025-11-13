#include <iostream>
#include <math.h>
#include <string.h>
#include <cstdlib>
#include <iomanip>
using namespace std;

// Tubig marka ni shantidope

int main()
{
    int counter, sum = 0, num;
    cout << "Enter numbers: ";
    for (counter = 1; counter <= 3; ++counter) {
        cin >> num;
        sum = sum + num;
    }
    cout << "Sum : " << sum << "\n";
    return 0;
}