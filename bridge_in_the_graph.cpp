#include<bits/stdc++.h>

/*
Pankaj Adhana
Panjab university
*/

using namespace std;
vector<int>graph[10001];
bool vis[10001];
int in[10001],low[10001];
int timer;
void dfs(int src,int parent)
{
  vis[src]=true;
 // cout<<src<<" ";
  in[src]=low[src]=timer;
  timer++;

  for(auto child :graph[src])
  {
  	if(child==parent)continue;   //beacause it is already visited //we cant do something in this situation 
  	if(vis[child])// then we have src-child is a back edge
  	{
      low[src]=min(low[src],in[child]);
  	}
  	else  //src-child  is a forward edge 
  	{     
      dfs(child,src);
      if(low[child]>in[src]) 
      	cout<<src<<" -> "<<child<<" is a bridge"<<endl;
      low[src]=min(low[src],low[child]);
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
 	//graph is ready 
 }
 dfs(1,-1);  //we are starting from 1 and its temp.parent is -1;
}