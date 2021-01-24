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
bool vis[10][10];
int dist[10][10];
char tx;
int ty;
bool isvalid(int x,int y)// validation is completed
{
  if(x<1 or x>8 or y<1 or y>8)return false;
  if(vis[x][y]==true)return false;
  return true;
}
int dx[] = { -2 , -1 , 1 , 2 , 2 , 1 , -1 , -2};
int dy[] = { 1 , 2 , 2 , 1 , -1 , -2 , -2 , -1};
void bfs(int x,int y)
{
  queue<pair<int,int>>q;
  q.push({x,y});
  vis[x][y]=true;
  dist[x][y]=0;
  while(!q.empty())
  {
    int curx=q.front().first;
    int cury=q.front().second;
    q.pop();
    for(int i=0;i<8;i++)
    {
      if(isvalid(curx+dx[i],cury+dy[i]))
      {
        int newx=curx+dx[i];
        int newy=cury+dy[i];

        q.push({newx,newy});
        vis[newx][newy]=true;
        dist[newx][newy]=dist[curx][cury]+1;

      }
    }
  }
}

void solve()
{
  char a;int b;
  for(int i=1;i<11;i++)
    for(int j=1;j<11;j++)
    {
      vis[i][j]=false;
      dist[i][j]=0;
    }
    cin>>a>>b;
    int x=a-'a'+1;
    bfs(x,b);

    cin>>tx>>ty;
    int up=tx-'a'+1;
    cout<<dist[up][ty]<<endl;
}
int main()
{
fast_io;
cases;
//solve();
}