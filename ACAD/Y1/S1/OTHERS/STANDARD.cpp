#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

int main()
{
    int number, number_check;

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