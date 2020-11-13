#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n, out = 0;
    cin >> n;

    if(n % 2 == 0) out = n / 2;
    else out = ((n + 1) / 2) * (-1);

    cout << out;
    return 0;
}