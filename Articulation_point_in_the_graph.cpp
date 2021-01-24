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
vector<int>adj[100001];
bool vis[100001];
int tin[100001],low[100001];
int timer=0;
set<int>AP;
void dfs(int src, int p=-1)
 {
  vis[src] = true;
  tin[src] = low[src] = timer++;
   int children=0;
   for (int child : adj[src])
    {
     if (child == p) continue;
     if (vis[child]) low[src] = min(low[src], tin[child]); 
        else
         {
            dfs(child, src);
            ++children;              //this is basically the children count
            low[src] = min(low[src], low[child]);
            if (low[child] >= tin[src] && p!=-1)
                AP.insert(child);
        }
    }
    if(p == -1 && children > 1)
        AP.insert(1);
}
void solve()
{
int n,e;
cin>>n>>e;
for(int i=0;i<e;i++)
{
	int a,b;
	cin>>a>>b;
	adj[a].push_back(b);
	adj[b].push_back(a);
}
for(int i=1;i<=n;i++)
{
dfs(i);	
}
cout<<AP.size()<<endl;
}
int main()
{
fast_io;
 solve();
} 