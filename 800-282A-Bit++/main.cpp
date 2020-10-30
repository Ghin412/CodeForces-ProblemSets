#include <iostream>

using namespace std;

int main()
{
    int n, x = 0;
    char input[n];
    
    cin >> n;
    gets(input);
    for(int i = 0; i < n; i++)
    {
        gets(input);
        for(int j = 0; j < 3; j++)
        {
            if(input[j] == '+')
            {
                x++;
                break;
            }
            if(input[j] == '-')
            {
                x--;
                break;
            }
        }
    }

    cout << x;

    return 0;
}