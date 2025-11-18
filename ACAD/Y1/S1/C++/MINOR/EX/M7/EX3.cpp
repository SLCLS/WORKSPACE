#include <iostream>
using namespace std;

// Tubig marka ni shantidope

void PassbyValue(int a, int b) {
    cout << "When passed to function as value parameter...\n";
    a++;
    b--;
    cout << "\nValue of x: " << a << endl;
    cout << "\nValue of y: " << b << endl;
}

int main() {
    int x = 1, y = 10;
    PassbyValue(x, y);

    cout << "\nWhat happens after ";
    cout << "calling the function...\n" << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;
    return 0;
}