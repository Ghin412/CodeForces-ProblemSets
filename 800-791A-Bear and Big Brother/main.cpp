#include <iostream>

using namespace std;

int main()
{
    int Limak, Bob;

    cin >> Limak >> Bob;

    int i = 0;
    while(Limak <= Bob)
    {
        Limak *= 3;
        Bob *= 2;
        i++;
    }

    cout << i;
    return 0;
}