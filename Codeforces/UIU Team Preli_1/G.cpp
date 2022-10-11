#include<iostream>
using namespace std;
int main()
{
    int t,Count=0,i;
    static int arr[1000002];
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(i=1;i<n-1;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=1;i<n-1;i++)
        {
           if(arr[i-1]<=arr[i] && arr[i]<=arr[i+1])
            Count++;
        }

         printf("%d\n",Count);

    }
    return 0;
}
