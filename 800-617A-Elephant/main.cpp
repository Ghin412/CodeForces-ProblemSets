#include <iostream>

using namespace std;

int main()
{
    int steps = 5, n, count = 0;

    cin >> n;

    while(n != 0)
    {
        if(n - steps >= 0)
        {
            n -= steps;
            count++;
        }  
        else steps--;
    }

    cout << count;
    return 0;
}