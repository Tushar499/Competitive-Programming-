#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,x,y;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c>>x>>y;
        if(a+c>=x+y && b+c>=x+y || c==x && c==y){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
