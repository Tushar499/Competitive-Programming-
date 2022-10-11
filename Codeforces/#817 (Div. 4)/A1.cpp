#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    string s1;
    string s2;
    cin>>n;
    for(int q=1; q<=n; q++)
    {
        long long cis;
        cin>>cis;
        cin>>s1;
        for(int z=0; z<s1.size(); z++)
        {
            if(s1[z]=='G')s1[z]='B';
        }
        cin>>s2;
        for(int z=0; z<s2.size(); z++)
        {
            if(s2[z]=='G')s2[z]='B';
        }
        if(s1==s2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
