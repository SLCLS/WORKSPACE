#include <iostream>
using namespace std;

// Tubig marka ni shantidope

void Duplicate(int& a, int& b, int& c) {
    a *= 2;
    b *= 2;
    c *= 2;
}

int main() {
    int x = 1, y = 3, z = 7;
    Duplicate(x, y, z);
    cout << "x=" << x << ", y=" << y << ", z=" << z;
    return 0;
}