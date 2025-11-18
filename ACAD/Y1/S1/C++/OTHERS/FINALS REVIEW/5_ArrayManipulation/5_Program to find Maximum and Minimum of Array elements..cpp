// Program to find Maximum and Minimum of Array elements.

#include <iostream>
using namespace std;

int main()
{
	int  i, j, arr[5], min, max;

	cout << "\n Enter Five Integer Numbers ::: ";
	for( i=0 ; i<5 ; i++ )           //loop to enter array.
	{
		cin >> arr[ i ];
	}
	
	min = arr[0];
	max = arr[0];
	for( i=0 ; i<5 ; i++ )
	{
		if( min > arr[ i ] )  
			min = arr[ i ];  
		if( max < arr[ i ] ) 
			max = arr[ i ]; 
	}

	cout << "\n Minimum value is = " << min;
	cout << "\n Maximum value is = " << max;

	return 0;
}
