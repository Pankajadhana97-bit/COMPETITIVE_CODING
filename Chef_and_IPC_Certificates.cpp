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
  ll count=0;
  ll m,k;
  cin>>n>>m>>k;
  while(n--)
  {
  ll sum=0;
  ll arr[k];
  for(ll i=0;i<k;i++)
  {
  cin>>arr[i];
  sum+=arr[i];
  }
  ll q;
  cin>>q;
  if(sum>=m && q<=10)
     count++;
  }
  cout<<count<<endl;
}
int main() 
{ 
    fast_io;
    //cases;
    solve();
} 