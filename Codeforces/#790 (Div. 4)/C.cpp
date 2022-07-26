#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        string a[n+2];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int minimum = INT_MAX;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int d = 0;
                for(int k=0; k<m; k++)
                {
                    d += abs((a[i][k] - '0') - (a[j][k] - '0'));
                }
                minimum = min(minimum, d);
            }
        }
        cout << minimum << endl;

    }
    return 0;
}
