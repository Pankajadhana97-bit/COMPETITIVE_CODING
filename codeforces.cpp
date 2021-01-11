#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll>graph[200005];
bool vis[200005];
ll in_timer[200005];
ll out_timer[200005];
ll tym=1;
void dfs(ll src)
{
 vis[src]=true;
 in_timer[src]=tym++;
 for(auto child:graph[src])
 {
  if(!vis[child])
  	dfs(child);
 }
 out_timer[src]=tym++;
}
int main()
{
  ll n;
  cin>>n;
  ll e=n-1;
  for(ll i=0;i<e;i++)
  	{
  		ll a,b;
  		cin>>a>>b;
  		graph[b].push_back(a);
  		graph[a].push_back(b);
  	}
  	dfs(1);
  	ll queries;
  	cin>>queries;
  	// queries
  	while(queries--)
  	{
  	ll q;
    cin>>q;
    while(q--)
    {
        
    }
}
return 0;
}