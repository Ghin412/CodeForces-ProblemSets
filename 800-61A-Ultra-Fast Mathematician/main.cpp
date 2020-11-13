#include <iostream>

using namespace std;

int main()
{
    string n, m;

    cin >> n >> m;

    int i = 0;
    while(n[i] != '\0')
    {
        if(n[i] == m[i])
        {
            n[i] = '0';
        }
        else
        {
            n[i] = '1';
        }
        i++;
    }

    cout << n;
    return 0;
}