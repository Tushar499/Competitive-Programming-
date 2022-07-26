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
#define     print_the_array_INT(x,o,n)      for(int i=o;i<=n;i++){printf("%d ",x[i]);}printf("\n");

#define     ff                              first
#define     ss                              second
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
    int n;
    cin>>n;
    vi arr(n+1);
    in_range(i,1,n+1)
    arr[i]=i;
    for(int i=1; i<n; i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
    if(n>1 and n%2!=0)
    {
        swap(arr[n-1],arr[n]);
    }
    in_range(i,1,n+1){
    printf("%d ",arr[i]);
    }nl;
}


t2r/**
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
#define     print_the_array_INT(x,o,n)      for(int i=o;i<=n;i++){printf("%d ",x[i]);}printf("\n");

#define     ff                              first
#define     ss                              second
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
    int n;
    cin>>n;
    vi arr(n+1);
    in_range(i,1,n+1)
    arr[i]=i;
    for(int i=1; i<n; i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
    if(n>1 and n%2!=0)
    {
        swap(arr[n-1],arr[n]);
    }
    in_range(i,1,n+1){
    printf("%d ",arr[i]);
    }nl;
}


t2r
{
    Faster;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}




{
    Faster;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}



