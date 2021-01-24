#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases long long int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<int>
#define deb(x) cout << #x << x << endl;
#define all(v) v.begin(),v.end()
#define pi 3.1415926535897932384626433832795
/* -------------------------------------------------------------------- */
using namespace std;
int n,m;
bool vis[10001][10001];
bool isvalid(int x,int y)
{
	if(x<1 or x>n or y<1 or y>m)
		return false;
	 if(vis[x][y]) return false;
	 return true;
}
int dx[]={-1,0,1,0};//up,right,down left
int dy[]={0,1,0,-1};//up,right,down,left
void dfs(int x,int y)
{
	vis[x][y]=1;
	cout<<x<<" "<<y<<" "<<'\n';
	for(int i=0;i<=3;i++)
		{
			if(isvalid(x+dx[i],y+dy[i]))
				dfs(x+dx[i],y+dy[i]);
		}

}
void solve()
{
cin>>n>>m;
dfs(1,1);
//n=0,m=0;//no need to change anything everything will be overwrite
}
int main()
{
fast_io;
cases;
//solve();
}