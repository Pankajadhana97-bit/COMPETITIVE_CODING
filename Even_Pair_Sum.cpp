#include<bits/stdc++.h>

/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define all(v)  v.begin(),v.end()
#define ll long long int
/* -------------------------------------------------------------------- */
using namespace std; 
void solve()
{
  ll n,m;
  cin>>n>>m;
  if(n==1 && m==1)
  cout<<1<<endl;
  else
  {
    ll cnt1=0;ll cnt2=0;ll cnt3=0;ll cnt4=0;
  cnt1=n/2;//even
 cnt2=n-cnt1;//odd
  cnt3=m/2;//even
   cnt4=m-cnt3;//odd
  ll tot=cnt4*cnt3;
  cout<<(cnt1*cnt3)+(cnt2*cnt4)<<endl; 
  }
}
int main() 
{ 
    fast_io;
     cases;
    // solve();
} 