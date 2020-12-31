#include<iostream>
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
ll n,k;
cin>>n>>k;
ll sum=0;
for(ll i=0;i<n;i++)
{
    ll val;cin>>val;
    if(val>=k){
    ll mod=val%k;
    sum+=min(mod,k-mod);
    }
    else sum+=(k-val); 
}
cout<<sum<<endl;
}
int main()
{
fast_io;
cases;
}