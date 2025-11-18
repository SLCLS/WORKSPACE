// Program to explain Binary Search
#include <iostream>
using namespace std;

int main()
{
	int num[10], i, beg, end, mid, pos = -1, value;

	cout << "Enter Ten Numbers in Ascending Order::: ";
	for( i=0 ; i<10 ; i++ )
	{
		cin >> num[i];
	}

	cout << " Enter the number to be searched ::: ";
	cin >> value;

	beg = 0;
	end = 10 - 1;
	while(beg <= end)
	{
		mid = (beg + end) / 2;
		if( value == num[mid] )
		{
			pos = mid + 1;
			break;
		}
		else if ( value >= num[mid] )
			beg = mid + 1;
		else
			end = mid - 1;
	}

	if( pos == -1 )
		cout << "\n The element " << value << " not found.";
	else
		cout << "\n The position of " << value << " is ::: " << pos;
		
	return 0;
}
