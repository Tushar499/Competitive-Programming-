#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long res=0;
    cin>>t;
    int arr[1000];
    for(int i=0;i<t;i++){
        cin>>arr[i];
        res+=arr[i];
    }
    cout<<res<<endl;

    return 0;
}
