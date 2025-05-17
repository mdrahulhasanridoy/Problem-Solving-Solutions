
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int z = n, o = 0, p = 1;
        while (z > 0)
        {
            if (z % 10 != 0)
                o++;
            z /= 10;
        }
        cout << o << "\n";
        p = 1;
        while (n > 0)
        {
            int d = n % 10;
            if (d != 0)
            {
                cout << d * p << " ";
            }
            n /= 10;
            p *= 10;
        }
        cout << "\n";
    }
}