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
int arr[100001];
int find_(int a)
{
  if(arr[a]<0)
  	return a;
  return arr[a]=find_(arr[a]);
}
void union_(int a,int b)
{
	arr[a]=min(arr[b],arr[a]);
	arr[b]=a;
}
void solve()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		arr[i]=-i;
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
	 a=find_(a);
	 b=find_(b);
	 if(a==b)continue;
	 union_(a,b);
	}
	int q;
	cin>>q;
	while(q--)
	{
		int a,b;
		cin>>a>>b;
		int x=a;int y=b;
		a=find_(a);
		b=find_(b);
		if(a==b)cout<<"TIE"<<endl;
		else
		{
			if(arr[a]<arr[b])cout<<x<<endl;
			else cout<<y<<endl;
		}
	}
}
int main()
{
fast_io;
//cases;
solve();
}