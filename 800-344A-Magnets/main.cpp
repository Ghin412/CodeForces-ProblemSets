#include <iostream>

using namespace std;

int main()
{
    int n, out = 0;
    cin >> n;

    int arr[n];

    out = n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(i > 0 && arr[i] / 10 != arr[i-1] % 10) out--;
    }

    cout << out;
    return 0;
}