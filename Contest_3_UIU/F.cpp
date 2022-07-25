#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int t{};
    cin>>t;
    while(t--)
    {
         ll n{};
         cin>>n;
         string s{};
         cin>>s;
         ll m{};
         for(int i=0;i<n;i++)
         {
              if(s[i]=='1')
              m++;
         }
         cout<<(m*(m+1))/2<<endl;
    }
    return 0;
}
