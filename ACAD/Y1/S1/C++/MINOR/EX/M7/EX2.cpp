#include <iostream>
using namespace std;

// Tubig marka ni shantidope

long long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter n (non-negative integer): ";
    if (!(cin >> n)) return 0;

    if (n < 0) {
        cout << "Error: n must be a non-negative integer." << endl;
        return 1;
    }

    cout << n << "! = " << factorial(n) << endl;
    return 0;
}