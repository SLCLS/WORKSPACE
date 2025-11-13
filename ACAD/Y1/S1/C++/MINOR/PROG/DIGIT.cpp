#include <iostream>
using namespace std;

int main()
{
    int number;
    
    cout << "\nNOTE: Numbers with decimals are automatically truncated. Whole numbers only.";
    cout << "\nNOTE: Inputs are automatically treated as integers, please enter numerical value for accuracy.";
    cout << "\nPLEASE ENTER A NUMBER: \n";
    cin >> number;

    if (number > 0 && number < 10000)
    {
        cout << "\nIt is a positive number. ";

        if (number < 10)
        {
            cout << "The number has 1 digit.\n";
        }
        else if (number < 100)
        {
            cout << "The number has 2 digits.\n";
        }
        else if (number < 1000)
        {
            cout << "The number has 3 digits.\n";
        }
        else if (number < 10000)
        {
            cout << "The number has 4 digits.\n";
        }
    }
    else if (number >= 10000)
    {
        cout << "\nThe number has more than 4 digits.\nPlease enter a number with a maximum of 4 digits only.\n";
        return 1;
    }
    else
    {
        cout << "\nIt is a non-positive number.\n";
        cout << "Zero or negative numbers are not considered counting numbers.\n";
    }

    return 0;
}
