// Program to find Sum of Array elements.
#include <iostream>
using namespace std;

int main()
{
	int  sum;
	int  arr[5];
	int i;
	cout << " Enter any five Integer Numbers ::: ";
	for( i=0 ; i<5 ; i++ )
	{
		cin >> arr[ i ];
	}

	sum = 0;
	for( i=0 ; i<5 ; i++ )
	{
		sum = sum + arr[ i ];
	}
	cout << " The sum of the Array elements is ::: " << sum;

	return 0;
}
