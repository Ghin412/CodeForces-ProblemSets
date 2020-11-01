#include <iostream>

using namespace std;

int main()
{
    int n, cap = 0, a,b, max = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cap = cap - a + b;
        if(max < cap)
        {
            max = cap;
        }
    }

    cout << max;
    return 0;
}