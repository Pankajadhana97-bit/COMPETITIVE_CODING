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
ll ans=0;
ll value=(2*n)+1;
//cout<<value;
for(ll i=1;i<=value;i++)
{
    ll val;
    cin>>val;
   ans^=val;
}
cout<<ans<<endl;
}
int main()
{
fast_io;
//cases;
solve();
}