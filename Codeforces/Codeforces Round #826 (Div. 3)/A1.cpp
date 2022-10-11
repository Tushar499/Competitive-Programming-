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
//constants :
const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   mod                             = (int) 1000000007;
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

#define     YES                             printf("YES\n")
#define     Yes                             printf("Yes\n")
#define     NO                              printf("NO\n")
#define     No                              printf("No\n")
#define     nl                              "\n"
//extras :
#define     t2r                             int main()
#define     in_range(i,x,y)                 for(int i=x;i<y;i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)


//..............................................Let's Start with t2r.................................................


void solve()
{
    string a,b;
    cin>>a>>b;
    //int lena=a.size();
    //int lenb=b.size();
    if(a==b)
   		cout<<"=\n";
   	else
   	{
   		if(a.back()==b.back())
   		{
   			if((a.size()>b.size() && a.back()=='S') || (a.size()<b.size() && a.back()=='L' ))
   				cout<<"<\n";
   			else
   				cout<<">\n";
   		}
   		else
   		{
   			if(a.back()=='S' || a.back()=='M' && b.back()=='L')
   				cout<<"<\n";
   			else
   				cout<<">\n";
   		}
   	}
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


