#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, points;
    cin >> t ;
    int min(points), max(points), value=0;
    while (--t)
    {
        cin >> points;
        if (points < min)
        {
            min = points;
            value++;
        }
        if (points > max)
        {
            max = points;
            value++;
        }
    }
    cout << value << endl;
    return 0;
}
