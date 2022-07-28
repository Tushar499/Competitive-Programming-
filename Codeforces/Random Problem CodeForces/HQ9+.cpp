#include <iostream>
using namespace std;

int main()
{
    string s;
    int tag=0;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>=33&&s[i]<=126)
        {
            if(s[i]=='H'||s[i]=='Q'||s[i]=='9')

                tag=1;
        }
    }
    if(tag)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
