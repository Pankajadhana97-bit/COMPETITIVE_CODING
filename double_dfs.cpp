#include<iostream>
#include<vector>
#include<queue>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases long long int t=1;cin>>t; while(t--) { solve();}
#define ll long long int
#define all(v) v.begin(),v.end()
/* -------------------------------------------------------------------- */
using namespace std;
vector<ll>graph[1000001];
bool vis[1000001];
bool vis2[1000001];
ll dist[1000001];
ll dist2[1000001];
void bfs(ll y)
{
  queue<ll>q;
  q.push(y);
  dist[y]=0;
  vis[y]=true;
  while(!q.empty())
  {
    ll curr=q.front();
             q.pop();
    for(auto child:graph[curr])
    {
      if(!vis[child])
      {
      vis[child]=true;
      dist[child]=dist[curr]+1;
      q.push(child);
     }
    }
  }
}
void bfs2(ll z)
{
  queue<ll>q;
  q.push(z);
  dist2[z]=0;
  vis2[z]=true;
  while(!q.empty())
  {
    ll curr=q.front();
             q.pop();
    for(auto child:graph[curr])
    {
      if(!vis2[child])
      {
      vis2[child]=true;
      dist2[child]=dist2[curr]+1;
       q.push(child);
    }
   }
  }
}
void solve()
{
 ll n,e;
  cin>>n>>e;
  for(ll i=0;i<e;i++)
  {
    ll u,v;
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }
  ll y,z;
  cin>>y>>z;;
  bfs(y);
  bfs2(z);
  ll q;
  cin>>q;
  while(q--)
  {
    ll num;
    cin>>num;
    if(dist[num]<=dist2[num])cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }
}
main()
{
fast_io;
//cases;
solve();
}