#include <iostream>
#include <math.h>
#include <string.h>
#include <cstdlib>
#include <iomanip>
using namespace std;

// Tubig marka ni shantidope

int main(){
    int n = 10;
loop:
    cout << n << ", ";
    --n;
    if (n > 0) goto loop;
    cout << "FIRE!" << endl;
    return 0;
}
