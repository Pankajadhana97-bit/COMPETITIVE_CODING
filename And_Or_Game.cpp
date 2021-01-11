#include<bits/stdc++.h>

/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  long long int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<ll>
#define deb(x)<< #x<<" "<<x<<"\n";
#define all(v) v.begin(),v.end()
#define pi 3.14159265358993
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
  ll n,m;
  cin>>n>>m;
  vec a(n);
  vec b(m);
  for(ll i=0;i<n;i++)cin>>a[i];
  for(ll i=0;i<m;i++)cin>>b[i];
  unordered_set<ll>st;
  st.insert(0);
  for(ll i=0;i<n;i++) st.insert(a[i]);
    while(true)
    {
      ll count=st.size();
      for(auto it=st.begin();it!=st.end();it++)
      {
         for(ll j=0;j<n;j++)
          st.insert((*it)|a[j]);
      }
       for(auto it=st.begin();it!=st.end();it++)
      { 
         for(ll j=0;j<m;j++)
          st.insert((*it)&b[j]);
      }
      if(count==st.size()) break;
    }
    cout<<st.size()<<endl;
}

int main()
{
fast_io;
cases;
//solve()
}