#include<bits/stdc++.h>
using namespace std;
vector<int>graph[1000001];
bool vis[1000001];   //take a initiative to visit the path 
int dist[1000001];   // calc the dist fro src
int level[1000001];   //it main a count of nodes of each kind of src to len of nodes

void bfs(int src)
{
	queue<int>q;
	q.push(src);
	vis[src]=true;
	dist[src]=0;
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		for(int child:graph[curr])
		{
			if(!vis[child])
			{
				q.push(child);
				vis[child]=true;
				dist[child]=dist[curr]+1;
				level[dist[child]]++;
			}
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
		graph[a].push_back(b);//commom method to prepare graph 
		graph[b].push_back(a);//now the graph is complete 
	}
	int q; //queries which will need to be perform
	cin>>q;
	while(q--)
		{
			int src,d;
			cin>>src>>d;
			for(int i=0;i<=n+2;i++) vis[i]=false,level[i]=0;

				bfs(src);
			cout<<level[d]<<endl;
		}
}
