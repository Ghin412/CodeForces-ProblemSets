#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char input[n][10000];

    for(int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(strlen(input[i]) > 10)
        {
            cout << input[i][0] << strlen(input[i])-2 << input[i][strlen(input[i])-1] << "\n";
        }
        else
        {
            cout << input[i] << "\n";
        }
        
    }

    return 0;
}