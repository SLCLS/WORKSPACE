// C++ program to find if an integer is even or odd or neither (0)
// using nested if statements
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter an integer: ";  
    cin >> num;    

    // outer if condition
    if (num != 0) {
        
        // inner if condition
        if ((num % 2) == 0) {
            cout << "The number is even." << endl;
        }
         // inner else condition
        else {
            cout << "The number is odd." << endl;
        }  
    }
    // outer else condition
    else {
        cout << "The number is 0 and it is neither even nor odd." << endl;
    }
    cout << "This line is always printed." << endl;
}