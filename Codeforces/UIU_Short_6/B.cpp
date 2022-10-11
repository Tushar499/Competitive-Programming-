#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

    int N;
    string S;
    cin >> N >> S;
    int ans = 0;

    for(int i=0; i<N; i++) {
        if (S[i] == 'A' && S[i+1] == 'B' && S[i+2] == 'C') {
            ans++;
            S[i] == 'B' , S[i+1] == 'C' , S[i+2] == 'A';
        }
    }
    }
    cout << ans << endl;

	return 0;
}

