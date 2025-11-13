#include <iostream>
#include <string>
#include <limits>
using namespace std;

// TUBIG MARKA NI BAYON-ON.

// OLD VERSION, NO LOOPS.

int main()
{
	int month, day;
	string zodiac, month2;
	
	cout << "\nZODIAC SIGN CHECKER PROGRAM" << endl;
	cout << "ENTER MONTH:\n";
	cin >> month;
	cout << "ENTER DAY:\n";
	cin >> day;
	
	switch (month)
	{
		case 1:
			month2 = "JANUARY";
			if (day >= 1 && day <= 19)
			{
				zodiac = "CAPRICORN";
			}
			else
			{
				zodiac = "AQUARIUS";
			}
			break;
		case 2:
			month2 = "FEBRUARY";
			if (day >= 1 && day <= 18)
			{
				zodiac = "AQUARIUS";
			}
			else
			{
				zodiac = "PISCES";
			}
			break;
		case 3:
			month2 = "MARCH";
			if (day >= 1 && day <= 20)
			{
				zodiac = "PISCES";
			}
			else
			{
				zodiac = "ARIES";
			}
			break;
		case 4:
			month2 = "APRIL";
			if (day >= 1 && day <= 19)
			{
				zodiac = "ARIES";
			}
			else
			{
				zodiac = "TAURUS";
			}
			break;
		case 5:
			month2 = "MAY";
			if (day >= 1 && day <= 20)
			{
				zodiac = "TAURUS";
			}
			else
			{
				zodiac = "GEMINI";
			}
			break;
		case 6:
			month2 = "JUNE";
			if (day >= 1 && day <= 20)
			{
				zodiac = "GEMINI";
			}
			else
			{
				zodiac = "CANCER";
			}
			break;
		case 7:
			month2 = "JULY";
			if (day >= 1 && day <= 22)
			{
				zodiac = "CANCER";
			}
			else
			{
				zodiac = "LEO";
			}
			break;
		case 8:
			month2 = "AUGUST";
			if (day >= 1 && day <= 22)
			{
				zodiac = "LEO";
			}
			else
			{
				zodiac = "VIRGO";
			}
			break;
		case 9:
			month2 = "SEPTEMBER";
			if (day >= 1 && day <= 22)
			{
				zodiac = "VIRGO";
			}
			else
			{
				zodiac = "LIBRA";
			}
			break;
		case 10:
			month2 = "OCTOBER";
			if (day >= 1 && day <= 22)
			{
				zodiac = "LIBRA";
			}
			else
			{
				zodiac = "SCORPIO";
			}
			break;
		case 11:
			month2 = "NOVEMBER";
			if (day >= 1 && day <= 21)
			{
				zodiac = "SCORPIO";
			}
			else
			{
				zodiac = "SAGITTARIUS";
			}
			break;
		case 12:
			month2 = "DECEMBER";
			if (day >= 1 && day <= 21)
			{
				zodiac = "SAGITTARIUS";
			}
			else
			{
				zodiac = "CAPRICORN";
			}
			break;
		default: // ERROR CHECKING for MONTH input.
			cout << "\nERROR: Please enter a valid month (1 to 12 ONLY).\n";
			return 1;
	}
	
	// ERROR CHECKING for DAYS OF THE MONTH.
	if (month == 1 || month == 3 | month == 5 | month == 7 | month == 8 | month == 10 | month == 12)
	{
		if (day >= 1 && day <= 31)
		{
			cout << "\nThe Zodiac Sign for " << month2 << " " << day << " is " << zodiac << ".\n";
		}
		else
		{
			cout << "\nERROR: Please input a valid day.\n";
			return 1;
		}
	}
	else if (month == 4 | month == 6 | month == 9 | month == 11)
	{
		if (day >= 1 && day <= 30)
		{
			cout << "\nThe Zodiac Sign for " << month2 << " " << day << " is " << zodiac << ".\n";
		}
		else
		{
			cout << "\nERROR: Please input a valid day.\n";
			return 1;
		}
	}
	else
	{
		if (day == 29)
		{
			cout << "\nNOTE: This is a LEAP YEAR.\n";
			cout << "\nThe Zodiac Sign for " << month2 << " " << day << " is " << zodiac << ".\n";
		}
		else if (day <= 28 && day >= 1)
		{
			cout << "\nThe Zodiac Sign for " << month2  << " " << day << " is " << zodiac << ".\n";
		}
		else
		{
			cout << "\nERROR: Please input a valid day.\n";
			return 1;
		}
	}
	
	return 0;
}