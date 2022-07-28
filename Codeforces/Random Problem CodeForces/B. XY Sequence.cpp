#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,b,x,y;
        cin>>n>>b>>x>>y;
        long long a=0,result=0;
        for(int i=0;i<n;i++)
        {
            if(a+x<=b)
            {
                a+=x;
            }
            else
            {
                a-=y;
            }
            result+=a;
        }
        cout<<result<<endl;
    }
     return 0;
}
