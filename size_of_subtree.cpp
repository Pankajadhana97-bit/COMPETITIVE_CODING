#include<bits/stdc++.h>
using namespace std;
vector<int>graph[10001];
bool vis[10001];
int sub_size[10001];
int dfs(int src)
{
	vis[src]=true;
	int curr_size=1;
	for(auto child:graph[src])
	{
		if(!vis[child])
		{
          curr_size+=dfs(child);
		}
	}
	sub_size[src]=curr_size;
	return curr_size;
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
	{
		cout<<sub_size[i]<<" ";
	}

}