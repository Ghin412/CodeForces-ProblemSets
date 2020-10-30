#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int matrix[n][3];
    int count = 0;
    int solutions = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j< 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(matrix[i][j] == 1)
            {
                count++;
            }
        }
        if(count >= 2)
        {
            solutions++;
        }
        count = 0;
    }

    cout << solutions;
    
    return 0;
}