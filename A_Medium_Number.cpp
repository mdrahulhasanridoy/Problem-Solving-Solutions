#include<iostream>
using namespace std;

int main(){
    int x;
    int a, b, c;
    cin >> x;
    while (x--)
    {
        cin >> a >> b >> c;
        if((a > b && a < c) || (a > c && a < b))
            cout << a << endl;
        else if((b > c && b < a) || (b > a && b < c))
            cout << b << endl;
        else
        cout << c << endl;
    }
}