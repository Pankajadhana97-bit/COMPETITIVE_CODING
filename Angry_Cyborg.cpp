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
ll n,q;
cin>>n>>q;
vec v(n+1,0);
while(q--)
{
    ll l,r;
    cin>>l>>r;
    ll counter=0;
    for(ll i=l;i<=r;i++)
    {
        counter++;
        v[i]+=counter;
    }
}
for(ll i=1;i<=n;i++) cout<<v[i]<<" ";
cout<<endl;
}
int main()
{
fast_io;
cases;
}