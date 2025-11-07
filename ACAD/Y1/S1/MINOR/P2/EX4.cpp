#include <iostream>
#include <math.h>
#include <string.h>
#include <cstdlib>
#include <iomanip>
using namespace std;

// Tubig marka ni shantidope

int main()
{
    int n;
    cout << "Enter the starting number: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cout << i << ", ";
    }
    cout << "END!" << endl;
    return 0;
}