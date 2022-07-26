#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int A[100];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>A[i];

        if(A[i]>=1900)
        {
            cout<<"Division 1"<<endl;
        }
        else if(A[i]>=1600 && A[i]<=1899)
        {
            cout<<"Division 2"<<endl;
        }
        else if(A[i]>=1400 && A[i]<=1599)
        {
            cout<<"Division 3"<<endl;
        }
        else

            cout<<"Division 4"<<endl;

    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;

    cin>>n;
    while(n--)
    {
        cin>>x;

        if(x>=1900)
        {
            cout<<"Division 1"<<endl;
        }
         if(x>=1600 && x<=1899)
        {
            cout<<"Division 2"<<endl;;
        }
         if(x>=1400 && x<=1599)
        {
            cout<<"Division 3"<<endl;;
        }
        if(x<=1399)
        {
            cout<<"Division 4"<<endl;;
        }
    }

}
