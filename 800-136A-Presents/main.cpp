#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n], out[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        out[arr[i]-1] = i+1;
    }

    for(int i = 0; i < n; i++)
    {
        cout << out[i] << " ";
    }

    return 0;
}