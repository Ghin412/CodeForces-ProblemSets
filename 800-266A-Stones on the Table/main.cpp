#include <iostream>

using namespace std;

int main()
{
    int n, out = 0;
    string s;

    cin >> n >> s;
    
    for(int i = 1; i < n; i++)
    {
        if(s[i] == s[i-1])
        {
            out++;
        }
    }

    cout << out;
    return 0;
}