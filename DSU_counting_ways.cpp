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
const int N = 10e5;
int parent[N];
int Find(int a)
{
	if(parent[a]<0)
		return a;
	return parent[a]=Find(parent[a]);
}
void Union(int a,int b)
{
	parent[a]+=parent[b];
	parent[b]=a;
}
void solve()
{
	int n,m;
	cin>>n>>m;
	memset(parent, -1, sizeof(parent));
	while(m--)
	{
		int a,b;
		cin>>a>>b;

		a=Find(a);  // absolute parent of this parent 
		b=Find(b); //absolute parent a set 

		if(a!=b)   // if both are of same parent means they are already connected means no need to connect
		Union(a,b);// else we can point the absolute parent to the another absolutr parent 
	}
	ll res=1;
 for(int i=1;i<n+1;i++)
 {
 	if(parent[i]<0)
 		res=res*abs(parent[i]);
 	res=res%1000000007;
 }
 cout<<res<<endl;

}
int main()
{
fast_io;
cases;
//solve();
}