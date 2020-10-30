#include <iostream>

using namespace std;

int main()
{
    string n;

    cin >> n;

    int i = 0, j = 0;
    while(n[i] != '\0')
    {
        while(n[j] != '\0')
        {
            if(n[i] > n[j] && n[i] != '+' && n[j] != '+')
            {
                int temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
            j++;
        }
        i++;
        j = i+1;
    }

    cout << n;

    return 0;
}