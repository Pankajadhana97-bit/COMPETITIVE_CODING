#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases long long int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<int>
#define deb(x) cout << #x << x << endl;
#define all(v) v.begin(),v.end()
#define pi 3.1415926535897932384626433832795
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
//code here
ll n;
cin>>n;
int a[n],b[n];
for(ll i=0;i<n;i++)cin>>a[i];
for(ll j=0;j<n;j++)cin>>b[j];
  vector<ll>v(n);
      for(ll i=0;i<n;i++)
      {
      v[i]=(a[i]*20)-(b[i]*10);
      }
ll res=*max_element(all(v));
if(res<0)
cout<<0<<endl;
else cout<<res<<endl;
}
int main()
{
fast_io;
cases;
//solve();
}