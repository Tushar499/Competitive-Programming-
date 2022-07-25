#include<iostream>
using namespace std;
double val;
int A[30];
int main()
{
        string s;
        cin>>s;
        int Size= s.size();
        for(int i=0; i<Size; i++)
        {
            A[s[i]-'a']++;
        }
        for(int i=0; i<Size; i++)
        {
           val=val+A[s[i]-'a']*1.0/Size;
        }
       cout<<val;

    return 0;

}
