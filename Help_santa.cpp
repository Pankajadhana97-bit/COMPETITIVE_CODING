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
ll num;
cin>>num;
set<ll> s;
for(int i=0;i<num;i++)
{
    ll val;
    cin>>val;
    s.insert(val);
}
for(auto &x:s)cout<<x<<" ";
}
int main()
{
fast_io;
//cases;
solve();
}