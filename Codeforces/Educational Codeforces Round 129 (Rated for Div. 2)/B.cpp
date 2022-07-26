#include<bits/stdc++.h>
#define ll long long
using namespace std;
solve()
{
    ll int n,m,i=0;
    cin>>n;
    ll int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    ll int x=0,y=0,value=0;
    while(m--)
    {
        cin>>value;
        x+=value;
    }
    y=x%n;
    if(y==0)
        cout<<a[i]<<endl;
    else
        cout<<a[y]<<endl;
}
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
