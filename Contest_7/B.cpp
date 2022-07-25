#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int read()
{
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9')
    {
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9')
    {
        x=x*10+ch-'0';
        ch=getchar();
    }
    return x*f;
}
void write(int x)
{
    if(x<0)
    {
        putchar('-');
        x=-x;
    }
    if(x>9)
    {
        write(x/10);
    }
    putchar(x%10+'0');
}
inline ll gcd(ll x,ll p,ll mod)
{
    ll cnt=1;
    for(; p; p>>=1,x=x*x%mod)
    {
        if(p&1)
            cnt=cnt*x%mod;
    }
    return cnt;
}
ll n,m;
int main()
{
    int t;
    t=read();
    while(t--)
    {
        ll ans=0;
        n=read();
        m=read();
        ll tim=1;
        while(1)
        {
            if(tim>=m)
            {
                tim=m;
                ans+=(n/tim);
                if(n%tim)
                    ans++;
                break;
            }
            ans++;
            n-=tim;
            tim=tim*2;
            if(n<=0)
                break;
        }
        cout<<ans;
    }
    return 0;
}
