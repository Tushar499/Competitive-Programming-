#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int read()
{
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9')
    {
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9')
    {
        x=x*10+ch-'0';
        ch=getchar();
    }
    return x*f;
}
void write(int x)
{
    if(x<0)
    {
        putchar('-');
        x=-x;
    }
    if(x>9)
    {
        write(x/10);
    }
    putchar(x%10+'0');
}
int a[3],b[3];
int n;
int main()
{
    n=read();
    while(n--)
    {
        //cin.getline(s1,8);
        //cin.getline(s2,8);
        for(int i=0; i<3; i++)
            a[i]=read();
        for(int i=0; i<3; i++)
            b[i]=read();
        int flag=-1;
        for(int i=0; i<3; i++)
        {
            if(a[i]>b[i])
            {
                flag=1;
                break;
            }
            else if(a[i]<b[i])
            {
                flag=0;
                break;
            }
            else continue;
        }
        if(flag==1)
            printf("Player2\n");
        else if(flag==0)
            printf("Player1\n");
        else printf("Tie\n");
    }
    return 0;
}
