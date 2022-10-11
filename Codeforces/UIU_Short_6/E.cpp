#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int Case=1;
    while(t--)
    {
        int n;
        cin>>n;
        int m=sqrt(n);
        int res=0;
        for(int i=1; i<=m; i++)
            res+=n/i;

        res*=2;
        res-=m*m;

        cout<<"Case "<<Case<<": "<<res<<endl;
        Case++;

    }
    return 0;
}
