#include<bits/stdc++.h>
using namespace std;

int arr[15];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int ans=0;
        for(int j=0; j<(1<<n); j++)
        {
            int total=0,Count=0;
            for(int i=0; i<n; i++)
                if(j&(1<<i))
                {
                    Count++;
                    total+=arr[i];
                }
            if(total>=s)
            {
                bool flag=1;
                for(int i=0; i<n; i++)
                    if(j&(1<<i))
                        if(total-arr[i]>=s)
                            flag=0;
                if(flag)ans=max(ans,Count);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
