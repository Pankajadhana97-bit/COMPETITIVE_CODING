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
  int count=4;
  if(n==1)cout<<3<<endl;
  if(n==2)cout<<5<<endl;
  if(n>2)
  {
      count+=(n-2)*2;
      cout<<count<<endl;
  }
  
 

}
int main() 
{ 
    fast_io;
    cases;
} 