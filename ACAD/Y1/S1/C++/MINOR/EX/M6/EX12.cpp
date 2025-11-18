#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>
using namespace std;

// Tubig marka ni shantidope

int main(){
    int magic, guess;
    magic = rand();
    cout << "Enter your guess: \n";
    cin >> guess;
    if(guess == magic){
        cout << "You're right. \n";
        cout << magic << " is the magic number.";
    }
    else {
        if(guess > magic)
            cout << "Your guess is higher.\n";
        else
            cout << "Your guess is lower.\n";
    }
    return 0;
}
