#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <limits>
#include <cmath>
using namespace std;

double cube();
double sphere();
double rectangular();

// NUMERIC ERROR CHECKING FUNCTION (using limits library po)
template <typename T>
void numericOnly(const string& prompt, T& value) {
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cerr << "\nError: Invalid input. Please enter a number.\n";
        }
        else
        {
            break;
        }
    }
}


int main()
{
	double volume, length, width, height, radius, side;
	string shape2, shape_type;
	char shape;
	
	shape_selector:
	cout << "\n************************************\n" <<"          VOLUME OF SHAPE          \n" << "************************************\n";
	cout << "  [C] - Cube\n" << "  [S] - Sphere\n" << "  [R] - Rectangular Parallelepiped  \n";
	cout << "  [X] - EXIT" << "\n************************************\n";
	cout << "\nChoose your option: ";
	cin >> shape2;
	
	if (shape2 == "C" || shape2 == "c")
	{
		shape = 'C';
	}
	else if (shape2 == "S" || shape2 == "s")
	{
		shape = 'S';
	}
	else if (shape2 == "R" || shape2 == "r")
	{
		shape = 'R';
	}
	else if (shape2 == "X" || shape2 == "x")
	{
		cout << "\nThank you for using the program.\n";
		return 0;
	}
	else
	{
		cout << "\nERROR: Invalid input. Kindly choose from the option above.\n";
    	system("PAUSE");
    	system("CLS");
    	goto shape_selector;
	}
	
	switch (shape)
	{
		case 'C':
			shape_type = "cube";
			volume = cube();
			break;
			
		case 'S':
			shape_type = "sphere";
			volume = sphere();
			break;
			
		case 'R':
			shape_type = "Rectangular Parallelepiped";
			volume = rectangular();
			break;
			
		default:
			cout << "\nERROR: Invalid input. Kindly choose from the option above.\n";
    		system("PAUSE");
    		system("CLS");
    		goto shape_selector;
	}
	
	cout << fixed << setprecision(2);
	cout << "\nThe volume of the " << shape_type << " is " << volume << ".\n\n";
	system("PAUSE");
    system("CLS");
    goto shape_selector;
	
	return 0;
}

double cube()
{
	double side, ans;
	
	numericOnly("Enter side: ", side);
	ans = pow(side, 3);
	
	return ans;
}

double sphere()
{
	double radius, ans;
	
	numericOnly("Enter radius of the sphere: ", radius);
	ans = (((1.33333333333) * M_PI) * pow(radius, 3));
	
	return ans;
}

double rectangular()
{
	double length, width, height, ans;
	
	rectangle:
	
	system("CLS");
	cout << "\n************************************\n" <<"          VOLUME OF SHAPE          \n" << "************************************\n";
	cout << "  [C] - Cube\n" << "  [S] - Sphere\n" << "  [R] - Rectangular Parallelepiped  \n";
	cout << "  [X] - EXIT" << "\n************************************\n";
	cout << "\nChoose your option: R\n";
	
    while (true) {
        cout << "\nEnter length: ";
        cin >> length;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cerr << "\nError: Invalid input. Please enter a number.\n";
            system("PAUSE");
   			system("CLS");
            goto rectangle;
        } else
		{
            break;
        }
    }
	
    while (true) {
        cout << "Enter width: ";
        cin >> width;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cerr << "\nError: Invalid input. Please enter a number.\n";
            system("PAUSE");
   			system("CLS");
            goto rectangle;
        } else {
            break;
        }
    }
	
    while (true) {
        cout << "Enter height: ";
        cin >> height;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cerr << "\nError: Invalid input. Please enter a number.\n";
            system("PAUSE");
   			system("CLS");
            goto rectangle;
        } else {
            break;
        }
    }
	
	ans = length * width * height;
	
	return ans;
}
