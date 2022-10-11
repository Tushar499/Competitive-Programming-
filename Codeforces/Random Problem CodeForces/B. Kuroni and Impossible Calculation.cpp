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
const int N = 2e5 + 10;

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

int x[105];
t2r
{
    Faster;
    int n;
    ll m;
    cin>>n>>m;
    int arr[n];
    for(auto &x:arr){
        cin>>x;
    }
    /* in_range(i,0,n){
        cin>>arr[i];
    }
    */
    if(n>m){
        cout<<0<<endl;
    }else{
        ll ans=1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ans*=(abs(arr[i]-arr[j]))%m;
                ans%=m;
            }
        }
        cout<<ans<<endl;
    }
}
