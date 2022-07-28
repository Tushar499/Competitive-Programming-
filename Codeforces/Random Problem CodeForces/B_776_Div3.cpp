#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {

        int l, r, x;
        cin >> l >> r >> x;
        int result = r / x + r % x;
        int m = r / x * x - 1;
        if(m >= l)
            result = max(result, m / x + m % x);
        cout << result<<endl;
    }
    return 0;
}


