#include<iostream>
using namespace std;
int possMin(int a,int x)
{
    int Count=(a-x);
    Count++;
    return Count;
}
int possMin2(int a,int x)
{
    int Count2=(a-2*x);
    Count2++;
    return Count2;
}
int possMin1(int a)
{
    int Count1=a;
    Count1++;
    return Count1;
}

int main()
{
    int n,k,x,A,Count,Count1,Count2;
    cin>>n>>k>>x;
    while(n--)
    {
        // for(int i=0;i<n;i++){
        cin>>A;
           if(A%2!=0 && n!=5)
        {

           // Count=(A-x);
           // Count++;
           // if(n!=5){
            possMin(A,x);
            }
            else possMin2(A,x);
        }
         if (n%2==0)
        {
            possMin1(A);
           // Count1=A;
           // Count1++;

        }

    int minSum=Count+Count1+Count2;
    cout<<minSum;


}
