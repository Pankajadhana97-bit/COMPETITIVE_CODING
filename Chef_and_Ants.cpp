#include<bits/stdc++.h>

/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  long long int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<int>
#define all(v) v.begin(),v.end()
#define pi 3.14159265358993
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
   ll n;
   cin >> n;
   vector<ll>ants[n];
   unordered_map<ll,ll>mp;
   for(ll i=0;i<n;i++)
   {
    ll m;
    cin >> m;
    for(ll j=0;j<m;j++)
    {
       ll x;
       cin>>x;
       mp[abs(x)]++;
       ants[i].push_back(x);
    }
    sort(all(ants[i]));
  }
  ll res = 0;
  ll extra = 0;
  for (auto &x: mp)
  {
    if (x.second > 1) extra++;
  }
  for(ll i=0;i<n;i++)
  {
    for(ll j=0;j<(ll)ants[i].size();j++)
    {
      ll curr = 0;
      if (mp[abs(ants[i][j])] > 1)
      {
        if (ants[i][j]>0) curr = (ants[i].size())-(j + 1);
        else curr = j;
      }
      else
      {
        if (ants[i][j] > 0) curr = lower_bound(all(ants[i]), -1 * ants[i][j]) - ants[i].begin();
        else curr = (ants[i].size()) - (upper_bound(all(ants[i]), -1 * ants[i][j]) - ants[i].begin());
      }
      res += curr;
    }
  }
  cout << res + extra <<endl;
}
int main()
{
fast_io;
cases;
}