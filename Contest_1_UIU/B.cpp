#include <bits/stdc++.h>
using namespace std;
int main()
{

    int sum=0;
    int N;
    cin>>N;
    int arr[100];
    for(int i=2; i<=N; i++)
    {
        cin>>arr[i];

        if (arr[i]-arr[i-1] >= 0)
        {
            sum=sum + i*(arr[i]-arr[i-1]);
        }
        else
        {
            sum=sum + i*(arr[i-1]-arr[i]);
        }
    }
    return 0;
}
