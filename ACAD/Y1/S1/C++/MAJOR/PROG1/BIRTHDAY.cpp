#include <iostream>
#include <string>
using namespace std;

// Tubig marka ni Shantidope.

int main()
{
    int day, month, year; // Variables na gagamitin for "cin" inputs.
    string month2; // Variable na magstostore ng month in string format kasi bawal i-convert yung int type to string.

    cout << "ENTER YOUR BIRTHDAY\n" << "DAY: ";
    cin >> day;
    cout << "MONTH: ";
    cin >> month;
    cout << "YEAR: ";
    cin >> year;

    switch (month) // Uses month variable para sa cases.
    {
        case 1:
            month2 = "January"; // Example, "month = 1" will make "month2 = January".
            break;
        case 2:
            month2 = "February";
            break;
        case 3:
            month2 = "March";
            break;
        case 4:
            month2 = "April";
            break;
        case 5:
            month2 = "May";
            break;
        case 6:
            month2 = "June";
            break;
        case 7:
            month2 = "July";
            break;
        case 8:
            month2 = "August";
            break;
        case 9:
            month2 = "September";
            break;
        case 10:
            month2 = "October";
            break;
        case 11:
            month2 = "November";
            break;
        case 12:
            month2 = "December";
            break;
        default:
            cout << "\nInvalid month. (1-12 only)\n"; // Error checking 'to for month.
            return 1; // Return 1 is standard pag-error. Return 0 if okay lang.
    }

    if (year >= 1000 && year <= 2025) // Error checking for year. I put 1000-2025 range dito.
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) // Months with 31 days.
        {
            if (day >= 1 && day <= 31) // 31 days lang dapat, also may ">=1" kasi nagulat ako, ininput ni sir yung 0.
            {
                cout << "\nYour birthday is " << month2 << " " << day << ", " << year << ".\n";
            }
            else
            {
                cout << "\nPlease enter a valid day (1-31 only).\n";
                return 1;
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) // Months with 30 days.
        {
            if (day >= 1 && day <= 30)
            {
                cout << "\nYour birthday is " << month2 << " " << day << ", " << year << ".\n"; // 30 days lang dapat.
            }
            else
            {
                cout << "\nPlease enter a valid day (1-30 only).\n";
                return 1;
            }
        }
        else // Automatic february ma 'to, kasi yun na lang natitira. We have month error checking na sa taas.
        {
            if (year % 4 == 0) // Modulos 4, pag 0 yung sagot edi leap year yan.
            {
                if (day <= 1 && day >= 29) // Leap year so bali 29 days allowed.
                {
                    cout << "\nYour birthday is " << month2 << " " << day << ", " << year << ".\n";
                }
                else
                {
                    cout << "\nPlease enter a valid day (1-29 only).\n";
                    return 1;
                }
            }
            else
            {
                if (day >= 1 && day <= 28) // Not a leap year, so 28 days lang.
                {
                    cout << "\nYour birthday is " << month2 << " " << day << ", " << year << ".\n";
                }
                else
                {
                    cout << "\nPlease enter a valid day (1-28 only).\n";
                    return 1;
                }
            }
        }
    }
    else
    {
        cout << "\nPlease enter a valid year.\n";
        return 1;
    }

    return 0; // Standard return 0, everything is okay.
}