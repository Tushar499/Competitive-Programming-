#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int point1 = 0,point2 = 0;

    int A[100];
    int B[100];
    for (int i = 0; i < 3; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < 3; i++) {
        cin >> B[i];

        if (A[i] < B[i]) {
            point2 += 1;
        } else if (A[i] > B[i]) {
            point1 += 1;
        }
    }

    cout << point1 << " " << point2 << "\n";
    return 0;
}
