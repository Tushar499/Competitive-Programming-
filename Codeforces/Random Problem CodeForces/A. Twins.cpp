#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum1=0,sum2=0,count=0;
    cin>>n;
    int Arr[n];
   for(int j=0;j<n;j++){
        cin>>Arr[j];
        sum1+=Arr[j];
    }
    sum1=sum1/2;
    sort(Arr,Arr+n);
    for(int i=n-1;i>=0;i--){
        sum2+=Arr[i];
        count++;
        if(sum1<sum2)
            break;
    }
    cout<<count;
    return 0;
}

