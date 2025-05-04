#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int a;
        cin >> a;
        cout << (a / 10) + (a % 10) << endl;
    }
}