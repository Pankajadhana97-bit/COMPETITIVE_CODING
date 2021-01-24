#include<bits/stdc++.h>
using namespace std;

vector<int>graph[1001];   //globally declared
bool vis[1001];           //globally declared 
bool dfs(int src,int parent)
{
    vis[src]=true;
    //cout<<src<<" ";
    for(auto child:graph[src])
    {
  	if(!vis[child])
  	{
  		if(dfs(child,src))
  			return true;
  	}
  	else if(child!=parent)
  		return true;
    }
    return false;
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
    bool cyclic=dfs(1,-1);
     if(cyclic)
   	cout<<"yes"<<endl;
    else 
   	cout<<"No"<<endl;
}