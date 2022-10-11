#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        int opsneeded=0, ans = INT_MAX,res;
        for (int i = k; i < n; i++)
        {

            for (int j = i - k; j < i; j++)

                opsneeded += (arr[i - 1] - arr[j]);

            ans = min(ans, opsneeded);
        }
        cout<<ans<<endl;

    }
    return 0;
}


