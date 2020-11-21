#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define iint int64_t
/*--------------------------------------------------------------------*/
using namespace std;
void solve()
{
  iint a,b;
  cin>>a>>b;
  iint minus=a-b;
  if(minus%9==0)
  cout<<minus-1<<endl;
  else
 cout<<minus+1<<endl;
}
int main() 
{ 
    fast_io;
    //cases;
    solve();
} 