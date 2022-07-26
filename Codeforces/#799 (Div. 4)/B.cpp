#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string st;
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            st[x];
        }
        if(n%2!=0)
        {
            if(st.size()%2!=0)
                cout<<st.size()<<'\n';
            else cout<<st.size()-1<<'\n';

        }
        else
        {
            if(st.size()%2!=0) cout<<st.size()-1<<'\n';
            else cout<<st.size()<<'\n';
        }
    }
}

