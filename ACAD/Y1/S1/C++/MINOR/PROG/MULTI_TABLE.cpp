#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;
 
int main()
{
    int base, multi, result;
    float table, table_check;
    cout << "ENTER HOW MANY TABLES YOU WANT: ";
    cin >> table;
    table = table_check;
    if (table != int(table_check))
    {
        cout << "\nPLEASE ENTER A WHOLE NUMBER.";
        return 1;
    }
    while (base <= table_check)
    {
    cout << "Table" << table << setw(19);
    table_check++;
    }
    for (multi = 1; multi <= 10; multi++)
    {
        for (base = 1; base <= table; base++)
        {
            result = base * multi;
            cout << multi << " * " << base << " = " << result;
            if (multi < 10 && base < table)
            {
                cout << setw(10);
            }
            else if (multi == 10 && base == table)
            {
                cout << setw(9);
            }
            else
            {
                cout << "\n";
            }
        }
    }
    return 0;
}