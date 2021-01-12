#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases long long int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<int>
#define deb(x) cout << #x << x << endl;
#define all(v) v.begin(),v.end()
#define pi 3.1415926535897932384626433832795
/* -------------------------------------------------------------------- */
using namespace std;
vector<pair<int,int>>graph[100001];
    // depth first search is the best choice for weighed graph
int dfs(int src,int parent)
{
   int count=0;
   for(auto [c,t]:graph[src])
   // you will have to run in c++17 because c++14 does not each pair loop in c++
   {
       if(c!=parent)
       {
           int res=dfs(c,src);
           count+=res;
           if(res==0 and t==2)count++;
       }
   }
   return count;
}
void solve()
{
int n;
cin>>n;
int e=n-1;
for(int i=0;i<e;i++)
{
    int u,v,w;
    cin>>u>>v>>w;
    graph[u].push_back(make_pair(v,w));
    graph[v].push_back(make_pair(u,w));   // our graph is ready now 
}
cout<<dfs(1,-1)<<endl;
}
int main()
{
fast_io;
//cases;
solve();
}