#include <iostream>
using namespace std;

int main() {
    int w;
    std::cin >> w;
    if((w - 2) % 2 == 0 && w-2 > 0)
    {
        std::cout << "YES";
    } 
    else 
    {
        std::cout << "NO";
    }

    return 0;
}