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
  ll n;
  cin>>n;
  ll value;
  cin>>value;
  ll cnt=0;
  ll val1,val2;
  vector<ll>v(n);
  for(ll i=0;i<n;i++)
  {
     cin>>v[i];
     if(v[i]>=80 || v[i]<10)
           cnt++;
  }
  //cout<<cnt<<" "<<n-cnt<<endl;
  if(cnt%value==0)
  {
    val1=cnt/value;
  }
  else
  {
      val1=cnt/value+1;
  }
  ll num=n-cnt;
  if(num%value==0)
  {
      val2=num/value;
  }
  else
  {
      val2=num/value+1;
  }
  cout<<val1+val2<<endl; 
}
int main() 
{ 
    fast_io;
     cases;
    //solve();
} 