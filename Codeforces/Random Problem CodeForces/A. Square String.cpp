#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int l = s.length();
        bool OK = true;
        if (l % 2 == 0) {
            for(int i=0;i<l/2;i++)
                if (s[i] != s[i + l / 2])
                    OK = false;
        } else
            OK = false;
        cout << (OK ? "YES" : "NO") << endl;
    }
}
