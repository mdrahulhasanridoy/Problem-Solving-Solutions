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
        string s;
        cin >> s;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
        }
        int totalones = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                totalones += (count - 1);
            }
            else
            {
                totalones += (count + 1);
            }
        }
        cout << totalones << endl;
    }
}
