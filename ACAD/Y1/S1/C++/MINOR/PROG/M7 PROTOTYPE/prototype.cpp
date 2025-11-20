#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int terms;
    
    cout << "Enter the number of Fibonacci terms to generate: ";
    cin >> terms;

    if (terms < 0)
    {
        cout << "Please enter a non-negative number of terms." << endl;
    }
    else
    {
        cout << "Fibonacci Series:" << endl;

        for (int i = 0; i < terms; ++i)
        {
            cout << fibonacci(i) << " ";
        }

        cout << endl;
    }

    return 0;
}