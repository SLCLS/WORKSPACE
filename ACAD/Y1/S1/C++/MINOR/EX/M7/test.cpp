#include <iostream>
using namespace std;

int cnt = 0;

void my_recursive_function(int n)
{
    if (n == 0)
        return;
    cnt++;
    my_recursive_function(n / 10);
}

int main()
{
    my_recursive_function(123456789);
    cout << cnt;
    return 0;
}