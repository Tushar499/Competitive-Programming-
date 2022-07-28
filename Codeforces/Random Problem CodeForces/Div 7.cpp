#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1,k;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if (n % 7 == 0 )
        {
            cout<<n<<endl;

        }

        else
            int k=n%7;
        int x=7-k;

        if (n%10>=7)
        {
            cout<<n-k<<endl;

        }
        else if (n%10<=3)
        {
            cout<<n+x<<endl;

        }
        else
        {
            int z=n%10;
            if(z>=k)
            {
                cout<<n-k<<endl;
            }
            else{
                cout<<n+x<<endl;
            }
        }


    }
    return 0;
}


