#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <limits>
using namespace std;

// TUBIG MARKA NI BAYON-ON

double Area_Rectangle(double length, double width)
{
    double area;
    area = (length * width);
    return area;
}

double Area_Circle(double radius)
{
    double area;
    area = (M_PI * pow(radius, 2));
    return area;
}

template <typename T>
void numericOnly(const string& prompt, T& value) {
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cerr << "Error: Invalid input. Please enter a number.\n";
        }
        else
        {
            break;
        }
    }
}

int main()
{
    double r_area, r_l, r_w, c_a, c_r;
    string shape, shape_type, again;

    cout << "SHAPE AREA CALCULATOR\n\n";
    cout << "[ R / r ] RECTANGLE\n" << "[ C / c ] CIRCLE\n";
    
    shape:
    cout << "\nENTER SHAPE TYPE: ";
    cin >> shape;

    if (shape == "R" || shape == "r")
    {
        shape_type = "RECTANGLE";
        numericOnly("\nENTER LENGTH: ", r_l);
        numericOnly("\nENTER WIDTH: ", r_w);
        r_area = Area_Rectangle(r_l, r_w);
        cout << "\nTHE AREA OF THE " << shape_type << " IS " << fixed << setprecision(2) << r_area;
    }
    else if (shape == "C" || shape == "c")
    {
        shape_type = "CIRCLE";

        numericOnly("\nENTER RADIUS: ", c_r);
        c_a = Area_Circle(c_r);
        cout << "\nTHE AREA OF THE " << shape_type << " IS " << fixed << setprecision(2) << c_a;
    }
    else
    {
        cout << "\nINVALID SHAPE TYPE!\n";

        again:
        cout << "Would you like to try again? (Y/N): ";
        cin >> again;

        if (again == "Y" || again == "y")
        {
            goto shape;
        }
        else if (again == "N" || again == "n")
        {
            return 1;
        }
        else
        {
            cerr << "\nINVALID INPUT! ";
            goto again;
        }
    }

    return 0;
}