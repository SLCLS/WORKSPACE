#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

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
            system("pause");
            system("cls");
        }
        else
        {
            break;
        }
    }
}

double fibonacci(double sequence)
{
    if (sequence <= 1)
        return sequence;
    else
        return fibonacci(sequence - 1) + fibonacci(sequence - 2);
}

void positive(bool &valid, double number)
{
    if (number <= 0)
    {
        valid = true;
    }
    else
    {
        valid = false;
    }
}

int main()
{
    double sequence, output;
    bool valid;

    numericOnly("Enter how many terms of the Fibonacci sequence you want: ", sequence);
    positive(valid, sequence);

    if (valid)
    {
        cout << "Error: Input must be a positive integer." << endl;
        return 1;
    }
    else if (valid && sequence == int(sequence))
    {
        sequence = int(sequence);
        output = fibonacci(sequence);
    }

    cout << "The " << sequence << " term of the Fibonacci sequence is: " << output << "\n|";

    return 0;
}