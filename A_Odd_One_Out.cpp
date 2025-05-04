#include<iostream>
using namespace std;

int main(){
    int x;
    int a, b, c;
    cin >> x;
    while (x--)
    {
        cin >> a >> b >> c;
        if(a == b ){
            cout << c <<endl;
        }
        else if(b == c){
            cout << a <<endl;
        }
        else{
            cout << b <<endl;
        }        
    }
}