#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s[n];
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }
        int  minimum= INT_MAX;
        int m = s.size();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                int x=0;
                for(int k=0; k<m; k++)
                {
                    x+=abs(s[i][k]-s[j][k]);
                }
                minimum=min(x,minimum);
            }
        }

        cout<<minimum<<endl;
    }
}
