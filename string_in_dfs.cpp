#include<iostream>
#include<unordered_map>
#include<string>
#include<queue>
#include<vector>
using namespace std;
unordered_map<string,vector<string>>graph;//in case of strings were given
unordered_map<string,bool>vis;//noneed to worry do as usual
unordered_map<string,int>dist;
void bfs(string x)
{
	queue<string>q;
	q.push(x);
	vis[x]=true;
	dist[x]=0;
	while(!q.empty())
	{
		string curr=q.front();
		            q.pop();
		for(auto child:graph[curr])
		{	
            if(!vis[child])
            {
          	q.push(child);
          	vis[child]=true;
          	dist[child]=dist[curr]+1;
            }
         }
	}
}
void solve()
{
int n,e;
cin>>n>>e;
for(int i=1;i<=e;i++)
{
	string a,b;
	cin>>a>>b;
	graph[a].push_back(b);
	graph[b].push_back(a);
}
 string x,y;
 cin>>x>>y;
 bfs(x);
 cout<<dist[y]<<endl;
}
int main()
{
solve();
}