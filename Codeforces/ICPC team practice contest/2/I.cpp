#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int arr[1010];
int main()
{
    int n,sum=0;
    cin>>n;
    while(n!=0)
    {

        int a, k;
        cin>>a>>k;
        for(int i=1;i<=a;i++){
            cin>>arr[i];
        }
        sort(arr+1, arr+1+a);
        for (int i=1;i<=k;i++)
        {
            if(i<=a)
            {
                if (arr[i]<0)
                {
                    arr[i]=arr[i]*(-1),
                             k--;
                }

                else
                    break;
            }
        }
        if (k >= 1)
        {
            sort(arr+1, arr+1+a);
            arr[1]=arr[1]*(-1);
        }

        int sum = 0;
        for (int i=1;i<=a;i++)
            sum+=arr[i];

        cout<<sum<<endl;

        n--;
    }
    return 0;
}
