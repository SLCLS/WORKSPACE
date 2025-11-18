// Program to use Simple Array
#include <iostream>
using namespace std;

int  main()
{
	int num[5];
	int  i, sum = 0;

	for( i=0 ; i<5 ; i++ )
	{
		cout << " Enter value " << (i + 1) << " ::: ";
		cin >> num[ i ];
	}

	cout << "\n The elements are ::: ";
	for( i=0 ; i<5 ; i++ )
	{
		cout << "  " << num[ i ];
	}

	return 0;
}
