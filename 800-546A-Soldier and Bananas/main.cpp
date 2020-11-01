#include <iostream>

using namespace std;

int main()
{
    int k,n,w, out = 0;

    cin >> k >> n >> w;

    for(int i = 1; i <= w; i++) out += i * k;

    if(out - n > 0) cout << out - n;
    else cout << 0;

    return 0;
}