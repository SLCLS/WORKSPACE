#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

// TEMPLATE FOR NUMERIC INPUT VALIDATION, used as (for example): **numericOnly("ENTER LENGTH: ", r_l);**
template <typename T>
void numericOnly(const string& prompt, T& value) {
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cerr << "Error: Invalid input. Please enter a number.\n";
        }
        else
        {
            break;
        }
    }
}

int main()
{
    int number, number_check;
    float number2;

    cout << "ENTER AN INTEGER: \n";
    cin >> number;

    number_check = int(number);

    if (number_check != number)
    {
        cout << "NOT AN INTEGER!";
        return 1;
    }

    return 0;
}