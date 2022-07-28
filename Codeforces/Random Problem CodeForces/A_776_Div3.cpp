#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s, t;
        cin >> s >> t;
        bool Yes = false;
       for(int i=0;i<s.length();i++)
            if (s[i] == t[0] && i % 2 == 0)
                Yes = true;
        cout << (Yes ? "YES" : "NO") << endl;
    }
}
