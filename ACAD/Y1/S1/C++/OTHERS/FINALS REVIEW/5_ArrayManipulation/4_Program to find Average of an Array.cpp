// Program to find Average of an Array
#include <iostream>
using namespace std;

int main()
{
	float a[5];
	int i;

	for ( i=0 ; i<5 ; i++ )
	{
		cout << " Enter value : ";
		cin >> a[ i ];
	}

	float  s = 0;
	for( i=0 ; i<5 ; i++ )
	{
		s = s + a[ i ];
	}

	float  avg = s / 5;
	cout << " Average : " << avg;

	return 0;
}
