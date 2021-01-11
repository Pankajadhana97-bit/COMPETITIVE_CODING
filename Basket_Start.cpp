#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<int>
#define all(v) v.begin(),v.end()
#define pi 3.14159265358993
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
//code here
ll n,m;
cin>>n>>m;
vec v(n+m);
for(auto &x:v)cin>>x;
map<ll,ll>mp;
for(ll i=0;i<m+n;i++)
{
    mp[v[i]]++;
}
for(auto it=mp.begin();it!=mp.end();it++)
{
    if(it->second>1)
    cout<<it->first<<" ";
}
cout<<"\n"<<endl;
}
int main()
{
fast_io;
cases;
//solve()
}