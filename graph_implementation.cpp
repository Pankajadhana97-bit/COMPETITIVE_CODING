#include<bits/stdc++.h>
using namespace std;
vector<int>graph[101];
bool vis[101];
int nums[101];

void dfs(int src,int par)
{
   vis[src]=true;
   //cout<<src<<" ";
  nums[src]=(par)?1:2;

  for(auto child:graph[src])
  {
  	if(!vis[child])
  		dfs(child,~par);
  }
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
	int n;
	cin>>n;;
	int e=n-1;
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	nums[0]=1;
	dfs(1,0);
	for(int i=1;i<=n;i++)
	{
		cout<<nums[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<=n+1;i++)
	{
	vis[i]=false;
	graph[i].clear();
    }
}
	return 0;
}