#include <iostream>
using namespace std;

//tubig marka ni shantidope

void ques(string &name, int &edad)
{
	cout << "Yooo wassup mf, what's your name shawty?\n";
	cin >> name;
	cout << "Nice to meet you mah " + name + "! ";
	
	cout << "How old are you mah indio?\n";
	cin >> edad;
}

void minor(int age)
{
	cout << "YOOOO MANNN, PASS SA " << age << " YEARS OLD!\n" << endl;
}

void sakto(int age)
{
	cout << "YESS SAKTO SA " << age << " YEARS OLD MINIMUM KO!\n" << endl;
}

void legal(const string &name)
{
	cout << "Dinner at 9? " + name + " na legal age!\n" << endl;
}

void sixty_nine()
{
	cout << "Tanginang edad yan, 69 ampota.\n" << endl;
}

int main()
{
	string name; int edad;
	
	ques(name, edad);
	
	if (edad < 18)
	{
		minor(edad);
	}
	else if (edad == 18)
	{
		sakto(edad);
	}
	else if (edad > 18 && edad < 69)
	{
		legal(name);
	}
	else if (edad == 69)
	{
		sixty_nine();
	}
	else
	{
		cout << "Aayusin mo o jajakulin kita?" << endl;
	}
	
	return 0;
}