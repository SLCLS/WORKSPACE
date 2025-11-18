// Program to explain Initialization of an Array

#include <iostream>
using namespace std;

int  main()
{
	int  num[10] = { 10, 20, 30, 40, 50};

	for( int i=0 ; i<5 ; i++ )
	{
		cout << "  " << i+1 << " ::: " << num[ i ] << endl;
	}

	return 0;
}
