#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,output=0;
    string x;
    string s1="X++",s2="++X",s3="--X",s4="X--";
    cin>>n;
    while(n--){
        cin>>x;
        if(x==s2)
        {
            output++;
        }
        if(x==s1)
        {
            ++output;
        }
        if(x==s3)
        {
            --output;
        }
        if(x==s4)
        {
            output--;
        }

    }
    cout<<output;


}
