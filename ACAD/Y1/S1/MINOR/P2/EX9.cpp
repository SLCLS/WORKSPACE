#include <iostream>
#include <math.h>
#include <string.h>
#include <cstdlib>
#include <iomanip>
using namespace std;

// Tubig marka ni shantidope

int main()
{
    int num = 1;
    while (num <= 50) {
        cout << "Value of variable num is " << num << endl;
        if (num == 3) {
            break;
        }
        num++;
    }
    cout << "Out of while-loop" << endl;
    return 0;
}