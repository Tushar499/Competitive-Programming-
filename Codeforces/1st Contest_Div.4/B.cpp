#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,Count;

    cin>>t;
    while(t--)
    {
        cin>>n;
        int Arr[n];
      int l = sizeof(Arr)/sizeof(Arr[0]);
        for(int i=1; i<l; i++){
        if(Arr[i]==Arr[i-1])
            {
                Count++;
                if(Count>=3)
                {
                    cout<<Arr[i];
                }
            }
        }

    }
    return 0;

}
