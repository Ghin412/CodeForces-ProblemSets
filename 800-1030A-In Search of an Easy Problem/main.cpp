#include <iostream>

using namespace std;

int main()
{
    int n, temp;
    string out = "EASY";
    cin >> n;



    for(int i = 0; i < n; i++)
    {
        cin >>  temp;
        if(temp != 0) 
        {
            out = "HARD";
            break;
        }
    }

    cout << out;
    return 0;
}