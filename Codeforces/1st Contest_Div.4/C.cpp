#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
     cin >> t;
    while(t--) {
        int o1=0,o2=0,e1=0,e2=0;
        cin >> n;
        int Arr[n];

        for(int i = 0; i < n; i++) {
            cin >> Arr[i];
            if(i % 2 == 0) {
                if(Arr[i] % 2 != 0)
                    o1 = 1;
                else e1 = 1;
            } else {
                if(Arr[i] % 2 != 0)
                    o2 = 1;
                else e2 = 1;
            }
        }

        if(e1 && o1) {
            cout <<"NO"<<endl;
        } else if(e2 && o2) {
            cout <<"NO"<<endl;
        } else {
            cout <<"YES"<<endl;
        }
    }
}

/*
while(t--)
    {
        cin>>n;
        int Arr[n];
      //  int l = sizeof(Arr)/sizeof(Arr[0]);
        for(int i=1; i<=n; i++)
        {
            cin>>Arr[i];
            if(i%2==0)
            {
                if(Arr[i]%2!=0)
                    o1=1;
                else
                    e1=1;
            }
            else
            {
                if(Arr[i]%2 !=0)
                    o2=1;
                else
                    e2=1;
            }

            if (o1 && e1)
            {
                cout<<"NO"<<endl;
            }
            else if(o2 && e2)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        return 0;
    }
}
*/
