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
  int arr[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  int q;
  cin>>q;
  while(q--)
  {
      int sum=0;
      int q1,q2;
      cin>>q1>>q2;
      for(int i=q1-1;i<q2;i++)
      {
        sum+=arr[i];
      }
      cout<<sum<<endl;
  }

}
int main() 
{ 
    fast_io;
    cases;
} 