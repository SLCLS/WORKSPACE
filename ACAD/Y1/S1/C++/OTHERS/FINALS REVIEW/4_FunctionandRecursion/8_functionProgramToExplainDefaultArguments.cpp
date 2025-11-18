// Program to explain Default Arguments
#include <iostream>
using namespace std;

float  Simp_Int( float=1000, float=10, float=3 );

int main()
{
	float p, r, t, si;
	
	si = Simp_Int( 2000, 15, 2 );
	cout << "\n Simple Interest = " << si;

	si = Simp_Int( 2000, 15 );
	cout << "\n Simple Interest = " << si;

	si = Simp_Int( 2000 );
	cout << "\n Simple Interest = " << si;

	si = Simp_Int( );
	cout << "\n Simple Interest = " << si;

	return 0;
}

float Simp_Int( float p, float r, float t)
{
	float si;
	
	si = ( p * r * t ) / 100;
	
	return si;
}

