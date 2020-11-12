#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    string s;

    cin >> n >> s;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'A')
        {
            count++;
        }
    }

    if(count > n - count)
    {
        cout << "Anton";
    }
    else if(count < n - count)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
    return 0;
}