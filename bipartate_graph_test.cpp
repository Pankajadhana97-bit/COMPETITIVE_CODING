#include<bits/stdc++.h>
using namespace std;
vector<int>arr[10001];
int visited[10001];
int color[10001];

bool dfs(int node,int c)
{
    visited[node]=1;
    color[node]=c;

    for(auto kid :arr[node])
    {
        bool res=dfs(kid,~c);
        if(res==false)
        return false; 
     else
      if(color[node]==color[kid])
         return false;
    }
    return true;   
}
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    bool flag=true; 
    for(int i=1;i<=n;i++)
    {
        
    }
}