#include <iostream>  

using namespace std;

int main()
{
    int n, input;
    double out = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        out += input;
    } 

    cout << out/n;

    return 0;
}