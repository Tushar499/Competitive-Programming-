#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    bool OK=false;
    for(int i=0;i<n;i++)
    {
        if((sum-arr[i])%(n-1)==0 && (sum-arr[i])/(n-1)==arr[i]){
                OK=true;
                break;
            }
        }
        (OK)? cout<<"YES"<<endl:cout<<"NO"<<endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}
