#include<bits/stdc++.h>
using namespace std;
#define ms(x, n) memset(x,n,sizeof(x));
typedef  long long LL;
const int inf = 1<<30;
const int MAX = 510;

int n, q, A[MAX];
int main()
{
    cin >> q;
    while(q--){
        cin >> n;
        int N = n*4;
        for(int i = 1; i <= N;++i)
            cin >> A[ i];sort(A+1,A+1+N);

        bool flag = false;
        for(int i = 1; i <= N; i+=2)
            if(A[i] != A[i+1]){
                flag = true;
                break;
            }
        if(flag){
            cout << "NO" << endl;
            continue;
        }

        flag = true;
        int tar = A[1]*A[N];
        for(int l = 1, r = N; l < r; l+=2, r-=2)
            if(A[l]*A[r] != tar){
                flag = false;
                break;
            }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

	return 0;
}

