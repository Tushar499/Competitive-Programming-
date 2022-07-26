#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,a=1;
    int arr[100];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        for(int j=1; j<100; j++)
        {
            if(x*j*a==y)
            {
                cout<<j<<" "<<a<<endl;

                if(x*j*a!=y)
                cout<<"0 0"<<endl;

            }

        }a++;



    }
    return 0;
}
