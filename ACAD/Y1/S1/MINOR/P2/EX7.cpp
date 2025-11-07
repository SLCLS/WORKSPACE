#include <iostream>
#include <math.h>
#include <string.h>
#include <cstdlib>
#include <iomanip>
using namespace std;

// Tubig marka ni shantidope

int main()
{
    int start, end;

    cout << "Enter starting value: ";
    cin >> start;
    cout << "Enter ending value: ";
    cin >> end;

    if (start <= end)
    {
        do
        {
            cout << start << " ";
            start++;
        } while (start <= end);
    }
    else
    {
        do
        {
            cout << start << " ";
            start--;
        } while (start >= end);
    }

    return 0;
}