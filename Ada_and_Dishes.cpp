#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define all(x) x.begin(),x.end()
/*--------------------------------------------------------------------*/
using namespace std;
void solve()
{
   int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  sort(all(v),greater<int>());
  if(n==1) cout<<v[0]<<endl;
  if(n==2) cout<<v[0]<<endl;
  if(n==3)
    {
    int sum=v[1];
    int diff=v[0]-v[1];
    sum+=max(diff,v[2]);
    cout<<sum<<endl;
     }
 if(n==4)
    {
     int sum=v[1];
     int diff=v[0]-v[1];
     sum+=min(diff,v[2]);
     int diff1=abs(v[2]-diff);
     sum+=max(v[3],diff1);
     cout<<sum<<endl;
        }
 }
int main() 
{ 
    fast_io;
    cases;
} 