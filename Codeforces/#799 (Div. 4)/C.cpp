#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;
    while(t--){

    string s[8];
    for(int i=0; i<=7; i++)
    {
        cin>>s[i];
    }

    int x,y;
    for(int i=1; i<=6; i++)
    {
        for(int j=1; j<=6; j++)
        {
            if(s[i][j]=='#')
            {
                if(s[i-1][j-1]=='#' && s[i-1][j+1]=='#' && s[i+1][j-1]=='#' && s[i+1][j+1]=='#')
                {
                    x=i+1;
                    y=j+1;
                }
            }
        }
    }
    cout<<x<<" "<<y<<endl;

}
 return 0;
}
