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
vector<int>graph[100005];
bool vis[100005];
int dist[100005];
void dfs(int src,int parent)
{
    vis[src]=true;
    dist[src]=dist[parent]^1;
    for(auto child:graph[src])
    if(!vis[src])
    {
    if(child==src)continue;
     dfs(child,src);
    }
}
void solve()
{
  int n;
  cin>>n;
  for(int i=0;i<n-1;i++)
  {
      int a,b;
      cin>>a>>b;
      graph[a].push_back(b);
      graph[b].push_back(a);
  }
  memset(dist,0,sizeof(dist));
  dfs(1,0);
  for(int i=1;i<=n;i++)
  cout<<dist[i]+1<<" ";
  cout<<endl;
  for(int i=1;i<=n;i++)
   graph[i].clear();
}
int main()
{
fast_io;
cases;
//solve();
}