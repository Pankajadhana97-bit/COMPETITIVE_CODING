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
ll n;
cin>>n;
vector<pair<string,string>>p(n);
map<string,ll>mp;
for(auto &x:p)
{
    cin>>x.first;
    cin>>x.second;
    mp[x.first]++;
}
//for(auto &x:p)cout<<x.first<<" "<<x.second<<endl;
for(auto &x:p)
{
   if(mp[x.first]>1)
   cout<<x.first<<" "<<x.second<<endl;
   else cout<<x.first<<endl;
}
}
int main()
{
fast_io;
cases;
}