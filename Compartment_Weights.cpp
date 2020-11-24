#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll int64_t
/*--------------------------------------------------------------------*/
using namespace std;
void solve()
{
 ll n;
 cin>>n;
 ll sum=0;
 ll arr[n];
 for(ll i=0;i<n;i++)cin>>arr[i];
  ll q;
  cin>>q;
  while(q--)
  {
      ll s;
      cin>>s;
      ll e;
      cin>>e;
      ll val;
      cin>>val;
      for(ll i=s-1;i<e;i++)
      {
          arr[i]=arr[i]+val;
      }
  }
  for(ll j=0;j<n;j++)
  sum+=arr[j];

  cout<<sum<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 