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
  int l,m,count=0;
  cin>>l>>m;
  int a,b;
  cin>>a>>b;
  for(int i=l;i<m-1;i++){
      for(int j=i+1;j<m;j++)
      {
          int val=i^j;
          if(val>=a || val<=b)
          count++;
      }
  }
  cout<<count<<endl;
}   
int main() 
{ 
    fast_io;
    cases;
} 