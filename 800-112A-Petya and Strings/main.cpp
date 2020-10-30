#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n,m;

    cin >> n >> m;

    int i = 0;
    while(n[i] != '\0')
    {
        n[i] = tolower(n[i]);
        m[i] = tolower(m[i]);
        i++;
    }

    if(n == m)
    {
        cout << 0;
    }
    else if(n < m)
    {
        cout << -1;
    }
    else
    {
        cout << 1;
    }
    
    return 0;
}