#include <iostream>
using namespace std;

// Tubig marka ni shantidope

void PassbyValue(int a, int b) {
    cout << "\nWhat happens after calling the function...\n" << endl;

    a++;
    b--;
    cout << "Value of x: " << a << endl;
    cout << "Value of y: " << b << "\n" << endl;
}

int main() {
    int x = 1, y = 10;

    cout << "\nWhen passed to function as value parameter...\n";
    cout << "\nValue of x (before the func): " << x << endl;
    cout << "Value of y (before the func): " << y << endl;

    PassbyValue(x, y);

    return 0;
}