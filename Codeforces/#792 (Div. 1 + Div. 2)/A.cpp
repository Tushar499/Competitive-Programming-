#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
         string s;
         cin>>s;
         int n=s.size();
         if(n<=2)
            cout<<s[n-1]<<endl;
         else if(n==1)
         cout<<s[0]<<endl;
         else {
            sort(s.begin(),s.end());
            cout<<s[0]<<endl;

         }
     }
     return 0;
}
