#include<iostream>
#include<vector>
using namespace std;
vector<int>graph[100001];
bool vis[100001];

void dfs(int src)
{
 vis[src]=true;
 //cout<<src<<" ";
 for(int child :graph[src])
 {
 	if(!vis[child])
 	{
 		dfs(child);
 	}
 }
}
int main()
{
	int n,e;
	cin>>n>>e;
	for(int i=0;i<e;i++)
	{
      int a,b;
      cin>>a>>b;
      graph[a].push_back(b);
      graph[b].push_back(a);
	}
	//dfs(1);
	int cc=0;
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			cc++;
			dfs(i);
		}
	}
	cout<<cc<<endl;
}