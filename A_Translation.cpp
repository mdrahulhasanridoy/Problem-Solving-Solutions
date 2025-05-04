#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string n, m;
    cin >> n >> m;
    reverse(n.begin(), n.end());
    if(n == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}