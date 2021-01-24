#include<bits/stdc++.h>
using namespace std;
vector<int>graph[100001]; //globally declare 
bool vis[100001];         //globally declare
int dist[100001];         //globally declare

void bfs(int src)
{
	queue<int>q; //make a queue first
	q.push(src); //then push the source node 

	vis[src]=true; //make the source node visited
	dist[src]=0; //set dist of source node origin 
	while(!q.empty())  //jb tk empty nhi ho jaata
	{
		int curr=q.front(); //front ko curr m store kr lo pehle 
		          q.pop();   //usko pop krdo kyuki uski copy hmne bana li h 
	for(int child:graph[curr]) //ab src ki adjency m check karo 
	{
		if(!vis[child]) //abhi source node aapki child k naam se chl rhi h 
			{
			 q.push(child); //usko push karo Q m 
			 dist[child]=dist[curr]+1;  // distance ko increment karo 1 se
			 vis[child]=true;  // or child ko visisted mark kr do 
			}
       }
	}
}
int main()
{
	int queries;
	cin>>queries;
	while(queries--)// running on the multiple test cases
	{
	int n,e;
	cin>>n>>e;
	for(int i=0;i<n+5;i++)vis[i]=false,graph[i].clear();
	for(int i=0;i<e;i++)  //it is the basic graph formation only nothing much extra thing 
	{
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	bfs(1); //bfs initiation 1 based indexing only 
   for(int i=1;i<=n;i++)
   {
   	cout<<dist[i]<<" ";  //making a visit of dist completely just to know what was present in the queue
   }
   cout<<endl;
}
}


//thank you //