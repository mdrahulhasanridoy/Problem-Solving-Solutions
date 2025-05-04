#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        long long a, b, c, s;
        cin >> a >> b >> c;
        s = a + b + c;
        if (s % 3 == 0)
        {
            int n = s / 3;
            if (a <= n && b <= n && c > n)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}