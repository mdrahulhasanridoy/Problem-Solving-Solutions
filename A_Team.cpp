#include <iostream>
using namespace std;
int main()
{
    int m, n, o, p, s = 0;
    cin >> p;
    while (p--)
    {
        cin >> m >> n >> o;
        if ((m + n + o) >= 2)
            s++;
    }
    cout << s;
}