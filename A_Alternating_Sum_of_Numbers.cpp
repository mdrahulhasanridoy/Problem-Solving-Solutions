#include<iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int sum = 0;
    while(--x)
    {
        int y;
        cin >> y;
        while(--y){
            for(int i = 0; i < y; i++)
            {
                int z;
                cin >> z;
                if (i % 2 == 0)
                    sum += z;
                else
                    sum -= z;
            }
            cout << sum << endl;
        }

    }
}