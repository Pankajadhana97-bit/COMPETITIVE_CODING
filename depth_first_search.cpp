#include<bits/stdc++.h>
using namespace std;
vector<int> a[100000]; //adjancy list 
int visited[100000];   //visited array 

void dfs(int k)
{
if(!visited[k])
   visited[k]=1;
  for(int i=0;i<a[k].size();i++)
    {
        if(!visited[a[k][i]])
        dfs(a[k][i]);
    }
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
    	//Directed graph 
        int p,q;
        cin>>p>>q;
        a[p].push_back(q);
    }
    int a,b;
    cin>>a>>b;
    dfs(a);
    if(visited[b]==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
   
}