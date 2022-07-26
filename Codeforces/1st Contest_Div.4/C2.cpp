#include<bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <numeric>
#include <string>
#include <cmath>
#define SIZE 1000
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        map<ll,ll>a;
        for(ll i=0; i<n; i++){
            ll y;
            cin>>y;
            a[y]++;
        }
        ll max = -1;
        for(auto val:a){
            if(val.second >= 3){
                max = val.first;
            }
        }
        cout<<max<<endl;
    }
}
