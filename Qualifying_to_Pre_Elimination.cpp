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
  int n;
  cin>>n;
  int k;
  cin>>k;
  int count=0;
  vector<int >v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  sort(v.begin(),v.end(),greater<int>());
  for(int i=0;i<n;i++)
  {
      if(v[i]>=v[k-1])
      count++;
      else
      break;
  }
  cout<<count<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 