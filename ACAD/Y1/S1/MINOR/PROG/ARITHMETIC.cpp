#include <iostream>
#include <string>
using namespace std;

int main()
{
    float num1, num2, result;
    char operation;

    cout << "\nENTER FIRST NUMBER: \n";
    cin >> num1;
    cout << "ENTER SECOND NUMBER: \n";
    cin >> num2;
    cout << "CHOOSE AN OPERATION (+, -, *, /): \n";
    cin >> operation;

    switch (operation)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) // Error checking po for division by zero.
            {
                result = num1 / num2;
            }
            else
            {
                cout << "\nERROR: Division by zero is not allowed.\n";
                return 1;
            }
            break;
        default:
            cout << "\nERROR: Invalid operation selected. Please choose from (+, -, *, /).\n";
            return 1;
    }

    cout << "\nTHE RESULT OF THE OPERATION IS: " << result << "\n";

    return 0;
}
