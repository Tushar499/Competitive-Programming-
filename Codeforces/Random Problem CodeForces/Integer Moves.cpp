#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
    int x, y;
	double result;
	cin >> x >> y;
	result = sqrt(pow(0 - x, 2) + pow(0 - y, 2));
	if (x == 0 && y == 0)
		cout << 0 << endl;
	else if (result == (int)result)
		cout << 1 << endl;
	else
		cout << 2 <<endl;
	}
	return 0;
}
