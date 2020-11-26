#include<bits/stdc++.h>
using namespace std;

//hint -> tree doesn't contain any cycle but a graph can so we
//we are checking if any cycle is present then it is not a Tree but 
// if it contain then it is a graph then print NO

vector<int> arr[1000001];
int visited[1000001];
void dfs(int node)
{
    visited[node]=1;
    for(auto kid : arr[node])
    if(visited[kid]==0)
    {
      dfs(kid);
    }
}
int main()
{
int n;
int m;
cin>>n>>n;
for(int i=1;i<=n;i++)
{
    int a;
    int b;
    cin>>a>>b;
    arr[b].push_back(a);
    arr[a].push_back(b);
}
int count =0;
for(int i=1;i<=n;i++)
{
    if(visited[i]==0)
    dfs(i),count++;
}
   if(count==1 && m==n-1)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

    return 0;
}

