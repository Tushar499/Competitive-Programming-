#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        for(int i=0;i<6;i++){
            cin>>s;

            if(s[0]+s[1]+s[2]==s[3]+s[4]+s[5]){
                cout<<"YES"<<endl;
            }
                else
                    cout<<"NO"<<endl;
                    break;
            }
        }
            return 0;

    }

