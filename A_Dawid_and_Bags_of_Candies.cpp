#include<iostream>
using namespace std;

int main()
{
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    if(x==w+y+z || y==w+x+z || z==w+x+y || w==x+y+z || w+x==y+z || w+z==x+y || w+y==x+z)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
