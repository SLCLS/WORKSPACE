//Assignment Operators
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    // 2 is assigned to a
    a = 2;

    // 7 is assigned to b
    b = 7;

   // value of a is assigned to temp
   temp = a;    // temp will be 2
   cout << "temp = " << temp << endl;

    // assigning the sum of a and b to a
    a += b;       // a = a +b
    cout << "a = " << a << endl;

    return 0;
}