#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        if (l == r && r == d && d == u)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}