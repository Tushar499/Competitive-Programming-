#include<bits/stdc++.h>
using namespace std;

vector<long long int>a;
int main()
{
  long long int n,i,k,g=0,sq,d;
    cin>>n>>k;
    sq=sqrt(n);
    for(i=1; i<=sq; i++)
    {
        if(n%i==0)
        {
            d=n/i;
            if((d*d)!=n)
            {
                a.push_back(d);
                g++;

            }
            a.push_back(i);
            g++;
        }
    }
    sort(a.begin(),a.end());
    if(k>g)
    printf("-1\n");
    else printf("%lld\n",a[k-1]);

    return 0;
}
