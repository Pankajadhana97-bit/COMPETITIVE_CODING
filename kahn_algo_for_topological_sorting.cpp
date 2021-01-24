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
vector<int> graph[100001];
vector<int> res;
int in[100001];
void kahn(int n)
{
	queue<int> q;
	for(int i=1;i<=n;i++)
	if(in[i]==0)
		q.push(i);
	while(!q.empty())
	{
		int curr=q.front();
		  q.pop();
		  res.push_back(curr);
		 for(int child:graph[curr])
		 {
		 	in[child]--;
		 	if(in[child]==0)
		 	q.push(child);
		 }
	}
	for(auto kid:res)
    cout<<kid<<" ";
}
void solve()
{
int n,e;
cin>>n>>e;
for(int i=0;i<e;i++)
{
	int a,b;
	cin>>a>>b;
	graph[a].push_back(b);
	in[b]++;
}
kahn(n);
}
int main()
{
fast_io;
//cases;
solve();
}