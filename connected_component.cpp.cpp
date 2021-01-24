#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define vec vector<int>
#define all(v) v.begin(),v.end()
#define deb(x) cout << #x << " "<< x << endl;
#define pi 3.14159265358993
/* -------------------------------------------------------------------- */
using namespace std;
int distance[10001];
void dfs(int src,bool *vis,vector<int>graph[])
{
	vis[src]=true;
	//cout<<src<<" ";
	for(auto child:graph[src])
	{
		if(!vis[child])
		{
		dfs(child,vis,graph);
	  }
	}
}


void solve()
{
 int v,e;
 int A,B;
 cin>>v>>e;
 cin>>A>>B;
 vector<int>graph[v+1];
 for(int i=1;i<=e;i++)
 {
 	int a,b;
 	cin>>a>>b;
 	graph[a].push_back(b);
 	graph[b].push_back(a);
 }
 int con=0;
  bool vis[v+1];
  memset(vis,false,sizeof(vis));
  for(int i=1;i<=v;i++)
  {
                    //we have to visit all the adjancency lists to know the fact that there in a path between 
  	if(!vis[i])    //each and every node of the tree if all the nodes are connected and edges are less than 1
                  //as compared to the nodes so it is a tree else it is a graph or cc is more than 1 then it is a nothing 
  	{
  		con++;
  		dfs(i,vis,graph);
  	}
  }
 //if(con==1 and e==v-1)
 // cout<<"YES"<<endl;
 //else cout<<"NO"<<endl;
  int num1=((con-1)*B)+A;
    int num2=con*A;
    cout<<min(num1,num2);
}
int main()
{
fast_io;
solve();
}
