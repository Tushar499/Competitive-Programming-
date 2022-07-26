#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0;i<n;i++) {
            cin >> arr[i];
        }
        ll count = 0;
        for (ll i = n-2;i>-1;i--) {
            while(arr[i+1] <= arr[i] && arr[i]) {
                arr[i] /= 2;
                count++;
            }
        }
        bool fail = false;
        for (ll i = 0;i<n-1;i++) {
            if (arr[i+1] <= arr[i]) {
                fail = true;
            }
        }
        if (fail) {
            cout << "-1\n";
        }
        else {
            cout << count << "\n";
        }
    }
    return 0;
}
