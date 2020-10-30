#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int mat[5][5];
    int n,m;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
            if(mat[i][j] == 1)
            {
                n = i;
                m = j;
            }
        }
    }

    cout << abs((5/2) - n) + abs((5/2) - m);

    return 0;
}