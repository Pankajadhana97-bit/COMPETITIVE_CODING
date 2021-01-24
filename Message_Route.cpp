#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> graph[100005];
int parent[100005];
ll n,m;
void dfs()
{
    queue<ll>q;
    q.push(1);
    parent[1]=-1;
    while(!q.empty() )
    {
        ll p = q.front() ;
        q.pop();
        if( p==n) break;
        for(auto i:graph[p] )
            if( !parent[i] ) parent[i] = p,q.push(i);
    }
    if(parent[n])
    {
        vector<ll>s;
        s.push_back(n);
        ll p = parent[n] ;
        while( p != -1 )
        {
            s.push_back(p);
            p = parent[p];
        }
        cout <<(s.size())<<endl;
        reverse(s.begin(),s.end());
       for(auto x:s)cout<<x<<" ";   
    }
    else
        cout << "IMPOSSIBLE";
}
int main()
{
    cin >>n>>m ;
    for(ll i=0;i<m;i++ )
    {
        ll u , v;
        cin >> u >> v ;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(); 
}