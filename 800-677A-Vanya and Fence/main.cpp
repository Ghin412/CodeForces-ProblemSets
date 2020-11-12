#include <iostream>

using namespace std;

int main()
{
    int n, h, out = 0;
    cin >> n >> h;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] > h) out+=2;
        else out++;
    }

    cout << out;
    return 0;
}