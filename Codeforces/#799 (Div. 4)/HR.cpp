#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,arr[1000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;
}


