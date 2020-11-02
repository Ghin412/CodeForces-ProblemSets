#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1,s2;
    int count = 0;
    
    cin >> s1 >> s2;

    for(int i = 0; i < s1.length(); i++)
    {
        if(s1[i] == s2[s1.length() - 1 - i])
        {
            count++;
        }
    }

    if(count == s1.length())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}