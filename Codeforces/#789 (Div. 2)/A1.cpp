#include<bits/stdc++.h>
using namespace std;
long long int n,t,a;
long long int value[100];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int count=0;
        memset(value, 0,sizeof value);
        for ( int i = 0; i <n; ++i){
            cin>>a;
            value[a]++;

            if (value[a]>1)
                count=1;
        }
        if(value[0]>0)
        {
            cout<<n-value[0]<<endl;
        }
        else
        {
            if(count==1)
            {
                cout<<n<<endl;
            }
            else cout<<n+1<<endl;
        }
    }
}


