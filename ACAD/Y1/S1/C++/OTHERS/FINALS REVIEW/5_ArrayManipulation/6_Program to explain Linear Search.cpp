// Program to explain Linear Search
#include <iostream>
using namespace std;

int main()
{
	int  num[10], i, pos = -1, value;

	cout << "Enter Ten Numbers ::: ";
	for( i=0 ; i<10 ; i++ )
	{
		cin >> num[ i ];
	}

	cout << " Enter the number to be searched ::: ";
	cin >> value;

	for( i=0 ; i<10 ; i++ )
	{
		if( value == num[ i ] )
		{
			pos = i + 1;
			break;
		}
	}

	if( pos == -1 )
		cout << "\n The element " << value << " not found.";
	else
		cout << "\n The position of " << value << " is ::: " << pos;
		
	return 0;
}
