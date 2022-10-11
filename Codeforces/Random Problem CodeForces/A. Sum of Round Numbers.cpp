/**
                                                           Author:
                                                   Mahmudur Rahman Tushar
                                                      Codeforces handle:
                                                         (Tushar499)
                                                   mr.rahman499@gmail.com
                                                                                                           *//*
                                                    Dream Big, Sleep Long.
*/#include<bits/stdc++.h>
using namespace std;
//data_type_compressions :
#define     ll                              long long int
#define     ull                             unsigned long long int

//STL :
#define     vi                              vector<int>
#define     vb                              vector<bool>
#define     vs                              vector<string>
#define     vc                              vector<char>
#define     vl                              vector<ll>
#define     si                              set<int>
#define     sl                              set<ll>
#define     ip                              pair<int,int>
#define     lp                              pair<ll,ll>
#define     psi                             pair<string,int>
#define     psl                             pair<string,ll>
#define     ipc                             pair<char,int>
#define     pcl                             pair<char,ll>
#define     vip                             vector<ip>
#define     PQ                              priority_queue
#define     vlp                             vector<lp>
#define     hashmap                         unordered_map
#define     msi                             multiset<int>
#define     msl                             multiset<ll>
#define     pb                              push_back
#define     spb                             insert
#define     erase_duplicates(x)             x.erase(unique(all(x)),x.end());
#define     all(x)                          x.begin(),x.end()
#define     all_0(x)                        memset(x,0,sizeof(x))
#define     all_neg(x)                      memset(x,-1,sizeof(x))
#define     all_1(x)                        memset(x,1,sizeof(x))
//I/O :
#define     Faster                          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define     Read(x)                         freopen(x,"r",stdin)
#define     Write(x)                        freopen (x,"w",stdout)
#define     take_the_array_INT(x,o,n)       for(int i=o;i<=n;i++){scanf("%d",&x[i]);}
#define     YES                             printf("YES\n")
#define     Yes                             printf("Yes\n")
#define     NO                              printf("NO\n")
#define     No                              printf("No\n")
#define     nl                              printf("\n")
//extras :
#define     t2r                             int main()
#define     in_range(i,x,y)                 for(int i=x;i<y;i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)


//..............................................Let's Start with t2r.................................................


void solve()
{
    ll n,ans,ans1,ans2,ans3,ans4,ans5;
    cin>>n;
    if(n>=0 && n<=9)
    {
        cout<<"1\n";
        cout<<n<<endl;
    }
    else if(n>=10 && n<100)
    {
        if(n%10==0)
        {
            cout<<"1"<<endl;
            cout<<n<<endl;
        }
        else
        {
            ans=n%10;
            n-=ans;
            cout<<"2"<<endl;
            cout<<n<<' '<<ans<<endl;
        }

    }
    else if(n>=100 && n<1000)
    {
        if(n%100==0)
        {
            cout<<"1"<<endl;
            cout<<n<<endl;
        }
        else
        {
            ans=n%100;
            n-=ans;
            ans1=ans%10;
            ans2=ans-ans1;
            if(n%100==0)
            {
                if(ans%10==0)
                {
                    cout<<"2\n";
                    cout<<ans<<' '<<n<<endl;
                }
                if(ans<10 && ans%10!=0)
                {

                    cout<<"2\n";
                    cout<<ans<<' '<<n<<endl;

                }
                else if(ans%10!=0)
                {
                    cout<<"3\n";
                    cout<<ans1<<' '<<ans2<<' '<<n<<endl;
                }
            }

        }
    }
    else
    {
        if(n%1000==0)
        {
            cout<<"1"<<endl;
            cout<<n<<endl;
        }
        else
        {
            ans=n%1000;
            n-=ans;
            ans1=ans%100;
            ans3=ans-ans1;
            ans2=ans1%10;
            ans1-=ans2;
            if(n%1000==0)
            {
                if(ans%10==0 && ans1%10!=0)
                {
                    cout<<"2\n";
                    cout<<ans<<' '<<n<<endl;
                }
                if(ans>10 && ans<100 && ans%10!=0)
                {
                    ans4=ans%10;
                    ans5=ans-ans4;
                    cout<<"3\n";
                    cout<<ans4<<' '<<ans5<<' '<<n<<endl;
                }
                if(ans%10!=0 && ans>100 && ans1%10==0)
                {
                    //ans1=ans%100;
                   // ans3=ans-ans1;
                    cout<<"3\n";
                    cout<<ans1<<' '<<ans3<<' '<<n<<endl;
                }
                if(ans<10 && ans%10!=0)
                {

                    cout<<"2\n";
                    cout<<ans<<' '<<n<<endl;

                }
                else if(ans%10!=0 && ans>100)
                {
                    ans1=ans%100;
                    if(ans1>=1 && ans1<=9)
                    {

                        //cout<<ans1;
                        cout<<"3\n";
                        cout<<ans1<<' '<<ans3<<' '<<n<<endl;
                    }
                    else
                    {
                        ans1-=ans2;
                        cout<<"4\n";
                        cout<<ans2<<' '<<ans1<<' '<<ans3<<' '<<n<<endl;
                    }
                }
            }

        }

    }


}


t2r
{
    Faster;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

