#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll int64_t
/*--------------------------------------------------------------------*/
using namespace std;
vector<int> ar[100001];
int vis[100001];
 
void dfs(int node)
{
	vis[node] = 1;
	for(int child:ar[node])
	  if(!vis[child])
	    dfs(child);
 
}
void solve()
{
     int n,m;
	cin>>n>>m;
 
	for(int i=1;i<=m;i++)
	{
	int a,b;
	cin>>a>>b;
	 ar[a].push_back(b);
	 ar[b].push_back(a);
	}
	int cc = 0;

	for(int i=1;i<=n;i++)
	if(!vis[i])
	dfs(i) , cc++;
	cout<<cc;
}
int main() 
{ 
    fast_io;
    solve();
} 