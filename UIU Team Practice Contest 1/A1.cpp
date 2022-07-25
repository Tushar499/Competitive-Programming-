#include<bits/stdc++.h>
using namespace std;

#define     Faster                          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
struct team
{
    string name;
    int s,p;

    bool operator < (const team &t)const
    {
        return s==t.s ? p<t.p : s>t.s;
    }
} t[105];

int main()
{
    Faster;
    int tt;

    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;

        for(int i=1;i<=n;i++)
        {
            cin>>t[i].name>>t[i].s>>t[i].p;
        }
        sort(t+1,t+n+1);
        cout<<t[1].name<<endl;
    }
    return 0;
}
