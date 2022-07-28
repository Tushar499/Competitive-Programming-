#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,v;
	cin>>n;
	int arr[5]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>v;
		arr[v]++;
	}
	int ans=arr[4]+arr[3];

	if(arr[3]<=arr[1])
		arr[1]-=arr[3];
	else
		arr[1]=0;

	ans+=arr[2]/2;
	if(arr[2]%2==1)
	{
		ans++;
	    arr[1]=max(0,arr[1]-2);
	}

	ans+=arr[1]/4;
	if(arr[1]%4!=0)
		ans++;
	cout<<ans;

}
