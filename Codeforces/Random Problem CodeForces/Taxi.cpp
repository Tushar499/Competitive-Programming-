#include <bits/stdc++.h>
using namespace std;
int A[10];

int main()
{
  int res=0, i, x, n;
  cin>>n;
  for (i=0; i<n; i++)
    scanf("%d", &x),
     A[x]++;
  res+=A[4];
  res+=A[3], A[1]-=min(A[3],A[1]);
  res+=A[2]/2, A[2]%=2;
  A[1]+=2*A[2], res+=(A[1]+3)/4;
 cout<<res<<endl;
  return 0;
}
