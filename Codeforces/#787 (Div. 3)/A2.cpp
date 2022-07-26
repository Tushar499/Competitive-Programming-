#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int t;
   cin>>t;
    while(t--){
        int a,b,c,x,y;
           cin>>a>>b>>c>>x>>y;

        x=max(0,x-a);
        y=max(0,y-b);
        if(c>=x+y)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
    }
    return 0;
}
