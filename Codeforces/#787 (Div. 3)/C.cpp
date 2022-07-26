#include<bits/stdc++.h>
using namespace std;

void Solve()
{
    string s;
    cin >> s;
    int n = s.size();
    if(n == 1)
    {
        cout << 1 << endl;
        return;
    }
    int len = n - 1, x = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '0')
        {
            len = i;
            break;
        }
    }

    for(int i=n-1; i>=0; i--)
    {
        if(s[i] == '1')
        {
            x = i;
            break;
        }
    }

    cout << abs(len - x) + 1 << endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Solve();
    }
    return 0;
}
