#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int Arr[n];
   for(int i=0;i<n;i++){
        cin>>Arr[i];
   }
   sort(Arr,Arr+n);
   for(int i=0;i<n;i++){
        cout<<Arr[i];
   }
   return 0;
}
