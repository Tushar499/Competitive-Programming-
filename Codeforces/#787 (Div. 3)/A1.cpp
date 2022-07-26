#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){

        ll a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;

        ll count = 0;
        if(x<=a){
            count += 0;
        }else{
            count += x-a;
        }

        if(y<=b){
            count += 0;
        }else{
            count += y-b;
        }

        if(count>0){
            if(count <= c){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"YES"<<endl;
        }


    }

    return 0;
}
