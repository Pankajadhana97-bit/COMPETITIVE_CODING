#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases long long int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define all(v) v.begin(),v.end()
#define pii pair<int,int>
#define ff first 
#define ss second
/* -------------------------------------------------------------------- */
using namespace std;
const int N=1e6+1;
vector<pii>adj[N];
void dijkstra(int src,vector<int> &dist,vector<int> &parent){
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    pq.push({0,src});
    dist[src]=0;
    while(!pq.empty()){
        int curr=pq.top().ss;
        int curr_d=pq.top().ff;
        pq.pop();
        for(pii child:adj[curr]){
            if(curr_d+child.ss <dist[child.ff])
            {
                dist[child.ff]=curr_d+child.ss;
                parent[child.ss]=child.ff;
                pq.push({dist[child.ff],child.ff});
            }
        }
    }
}
void solve()
{
int n,m;
cin>>n>>m;
while(m--){
    int a,b,w;
    cin>>a>>b>>w;
    adj[a].push_back({b,w});
    adj[b].push_back({a,w});
}
vector<int>dist(n+1,INT_MAX);
vector<int>parent(n+1,-1);
dijkstra(1,dist,parent);
if(dist[n]== INT_MAX)cout<<-1;
else
{
    for(int i=2;i<=n;i++)
    cout<<dist[i]<<" ";
 }
}
int main()
{
fast_io;
//cases;
solve();
}