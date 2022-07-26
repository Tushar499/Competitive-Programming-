#include<bits/stdc++.h>
using namespace std;
solve()
{
    int a,b;
    int result1 = 0;
    int result2=0;
    cin>>a;
    int n1[a];
    for(int i=0; i<a; i++)
    {
        cin>>n1[i];
        result1 = max(result1, n1[i]);
    }
    cin>>b;
    int n2[b];
    for(int i=0; i<b; i++)
    {
        cin>>n2[i];
        result2= max(result2,n2[i]);

    }
    if(result1>result2)
    {
        cout<<"Alice"<<endl<<"Alice"<<endl;
    }
    else if (result2>result1)
    {
        cout<<"Bob"<<endl<<"Bob"<<endl;
    }
    else
    {
        cout<<"Alice"<<endl<<"Bob"<<endl;
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
   return 0;
}
