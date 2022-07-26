#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    vector<int>vt;
    int x,y;
    cin>>x;
    int ax[x];
    for(int i=0; i<x; i++)
        cin>>ax[i];
    cin>>y;
    int ay[y],sumy=0;
    for(int i=0; i<y; i++)
    {
        cin>>ay[i];
        sumy+=ay[i];
    }
    int index=sumy%x;
    cout<<ax[index]<<endl;


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}

