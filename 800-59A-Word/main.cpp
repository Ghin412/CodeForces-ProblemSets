#include <iostream>
#include <string>

using namespace std;

int main()
{
    int countUpper = 0, countLower = 0;
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 65 and s[i] <=90) 
            countUpper++;
        else if (s[i] >= 97 and s[i] <=122)
            couttLower++;
    }

    for(int i = 0; i < s.length(); i++)
    {
        if(countLower >= countUpper) s[i] = tolower(s[i]);
        else s[i] = toupper(s[i]);
    }

    cout << s;
    return 0;
}