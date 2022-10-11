#include<bits/stdc++.h>
using namespace std;

int N;
int heights[10001];
int costs[10001];

long long count (double h){
    long long sum = 0LL;
    for (int i=0;i<N;i++)
        sum+= (fabs(h-heights[i])*costs[i]);
    return sum;
}

long long ternary(){
    double l = 0.0,r = 10010.0, EPS = 1e-9;
    while(r-l>EPS){
        double ml = ( l + (r - l) / 3.0), mr = (r - (r - l) / 3.0);
        if (count(mr)<count(ml))
            l = ml;
        else r = mr;
    }
    return min(count(floor(l)),count(ceil(l)));
}
int main(){
    int t;
   cin>>t;
    while(t--){
        int n;
        cin>>n;
        for (int i=0;i<n;i++)
            cin>>heights[i];
        for (int i=0;i<n;i++)
           cin>>costs[i];
        printf("%lld\n", ternary());
    }

}
