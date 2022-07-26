#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a1,a2,a3,count=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a1>>a2>>a3;

            if(a1<a2){
                a2=a2-1;
                count++;
            }
            else if(a2<a3){
                a3=a3-1;
                count++;
            }
            else if(a1==a2){
                a2=0;
                count++;
            }
            else if(a2==a3){
                a3=0;
                count++;
            }
            cout<<count<<endl;
        }

    }

    return 0;
}

