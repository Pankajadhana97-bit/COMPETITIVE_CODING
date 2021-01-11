#include<bits/stdc++.h>

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
ll n,k,days;
cin>>n>>k>>days;
vec v(n);
for(int i=0;i<n;i++)cin>>v[i];
ll sum=0;
for(int i=0;i<n;i++)
sum+=v[i];
if(sum<k)
cout<<0<<endl;
else
{
  ll ans=sum/k;
  cout<<min(ans,days)<<endl;
}
}
int main()
{
fast_io;
cases;
//solve()
}