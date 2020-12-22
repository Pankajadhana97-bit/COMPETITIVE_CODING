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
vec v(num);
ll sum=0;
for(ll i=0;i<num;i++)
{
cin>>v[i];
sum+=v[i];
}
ll ans=*max_element(v.begin(),v.end());
for(ll i=0;i<num;i++)
{
   ans=__gcd(ans,v[i]);
}
cout<<ans<<" "<<sum/ans<<endl;
}
int main()
{
fast_io;
cases;
}