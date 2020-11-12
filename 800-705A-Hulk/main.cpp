#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string hate = "hate";
    string love = "love";
    string out = hate;

    for(int i = 1; i < n; i++)
    {
        if(i%2 == 0)
        {
            out.append(" that I hate");
        }
        else if(i % 2 != 0)
        {
            out.append(" that I love");
        }
    }

    cout << "I " << out << " it";

    return 0;
}