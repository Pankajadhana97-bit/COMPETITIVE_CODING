#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<ll>
#define all(v) v.begin(),v.end()
#define pi 3.14159265358993
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
//code here
int n,k;
cin>>n>>k;
map<ll,ll>mp;
vec v(n);
for(int i=0;i<n;i++){
cin>>v[i];
mp[v[i]]++;
}
for(auto it=mp.begin();it!=mp.end();it++){
    if(it->second>k)
    cout<<it->first<<" ";
}
cout<<"\n";
}
int main()
{
fast_io;
cases;
}