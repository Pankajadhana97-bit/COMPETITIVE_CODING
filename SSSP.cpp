#include<bits/stdc++.h>
using namespace std;
vector<int>path[100001];
bool vis[100001];
int dist[10001];
void dfs(int src,int d)
{
	vis[src]=true;
	dist[src]=d;
	for(auto child:path[src])
	{
		if(!vis[child])
		dfs(child,dist[src]+1);
	}
}
int main()
{
   int n,e;
   cin>>n>>e;
   for(int i=1;i<=e;i++)
   {
   	int a,b;
   	cin>>a>>b;
   	path[a].push_back(b);
   	path[b].push_back(a);
   }
   for(int i=0;i<n;i++)
   {
   	if(!vis[i])
   	{
   		dfs(i,0);
   	}
   }
   for(int i=1;i<=n;i++)
   {
    cout<<dist[i]<<" ";
   }
}