#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll>graph[200001];
bool vis[200001];
ll in_timer[200001];
ll out_timer[200001];
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
  for(ll i=0;i<n;i++)
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
    ll arr[q];
    for(ll i=0;i<q;i++)
    	cin>>arr[i];
    bool flag=true;
    for(ll i=0;i<q;i++)
    {
    	if(in_timer[1]>in_timer[arr[i]] or out_timer[1]<out_timer[arr[i]])
    	{
    		flag=false;
    		break;
    	}
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}