#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>Arr;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            Arr[x]++;
        }
        int max = -1;
        for(auto val:Arr){
            if(val.second >= 3){
                max = val.first;
            }
        }
        cout<<max<<endl;
    }
}
