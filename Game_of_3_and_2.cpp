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
vec v(n);
for(auto &x:v)cin>>x;
sort(all(v));
if(n%3==0)
{
for(ll i=0;i<n/3;i++)
cout<<v[i]*3<<" "<<v[i]<<" "<<v[i]*2<<" ";
}
if(n%3==1)
{
    for(int i=0;)
}
}
int main()
{
fast_io;
//cases;
solve();
}