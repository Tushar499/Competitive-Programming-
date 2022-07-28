#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
int main()
{
    ll t,n;

    cin>>t;

    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = 1;
        for(int i = 1; i <= n; i++)
            ans*=2;
            ans--;
        cout<<ans<<endl;
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n;

    cin>>t;

    while (t--)
    {
        cin>>n;
        int ans=(int)pow(2,n)-1;
        cout<<ans<<endl;
    }
    return 0;
}
