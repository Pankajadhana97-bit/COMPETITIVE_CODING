#include<bits/stdc++.h>
using namespace std;
vector<int>  graph[100001];
bool vis[100001];
int sub_size[100001];

int dfs(int src)
{
	vis[src]=true;
	int curr=1;
	for(auto child:graph[src])
	{
		if(!vis[child])
			curr+=dfs(child);
	}
	   sub_size[src]=curr;
	   return curr;
}
int main()
{
   int n,e;
   cin>>n>>e;
   for(int i=0;i<n;i++)
   {
   	int a,b;
   	cin>>a>>b;
   	graph[a].push_back(b);
   	graph[b].push_back(a);
   }
   dfs(1);
   for(int i=1;i<=n;i++)
   	cout<<sub_size[i]<<" ";
}