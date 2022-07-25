#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int A[t];
    for(int i=0; i<t; i++)
    {
        cin>>A[i];
        if(A[i]==1 || A[i]==2)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<(A[i]-1)/2<<endl;
        }
    }
}
