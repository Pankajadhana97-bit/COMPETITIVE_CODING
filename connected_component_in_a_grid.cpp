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
/* -------------------------------------------------------------------- */
using namespace std;
int n,m;
int grid[100][100];
bool vis[100][100];
bool isvalid(int x,int y)
{
	if(x<1 or x>n or y<1 or y>m)
		return false;
	if(vis[x][y]==true or grid[x][y]==0)
		return false;
 return true;
}
int dx[]={-1,0,1,0};//up,right,down left
int dy[]={0,1,0,-1};//up,right,down,left
void dfs(int x,int y)
{
	vis[x][y]=true;
	//cout<<x<<" "<<y<<endl;
	for(int i=0;i<4;i++)
	if(isvalid(x+dx[i],y+dy[i]))
		dfs(x+dx[i],y+dy[i]);
}
void solve()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)
  	 cin>>grid[i][j];
  }
  int cc=0;
  for(int i=1;i<=n;i++)
  {
  	for(int j=1;j<=m;j++)
  	 if(vis[i][j]==0 and grid[i][j]==1)
  	 	dfs(i,j),cc++;
  }
  cout<<cc<<endl;
}
int main()
{
fast_io;
//cases;
solve();
}