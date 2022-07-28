#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Count=0;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int l=s.length();

    for(int i=1; i<l; i++)
    {

            if(s[i]!=s[i-1]){
                Count++;
        }
    }
    if(Count%2!=0){
        cout<<"CHAT WITH HER!";
    }
    else
        cout<<"IGNORE HIM!";


}
