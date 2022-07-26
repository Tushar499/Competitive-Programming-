#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int x,y,z;

        z=c;
        y=z+b;
        x=y+a;

        cout<<x<<" "<<y<<" "<<z<<endl;

    }
    return 0;
}
