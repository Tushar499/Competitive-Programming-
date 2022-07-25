#include <bits/stdc++.h>
using namespace std;

void MinSteps(int x1, int y1, int x2, int y2)
{

    cout <<"Output: "<< (abs(x1 - x2) + abs(y1 - y2)) << endl;


    while ((x1 != x2) || (y1 != y2))
    {
        if (x1 < x2)
        {

            x1++;
        }
        if (x1 > x2)
        {

            x1--;
        }
        if (y1 > y2)
        {

            y1--;
        }
        if (y1 < y2)
        {

            y1++;
        }

    }
}

int main()
{
    int n,x1,y1,x2,y2;
    cout<<"Enter an integer Value: ";
    cin>>n;
    while(n--){
    cout<<"Enter values: ";
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    MinSteps(x1, y1, x2, y2);
    }
    return 0;
}
