#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<ll>
#define all(v) v.begin(),v.end()
#define pi 3.14159265358993
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
ll n;
cin>>n;
vec v(n);
ll mx=0;
for(auto &x:v) cin>>x;
sort(all(v));
vec v1;
for(ll i=0;i<n;i++)
{
   if(v[i]==v[i+1])         
   {
       v1.push_back(v[i]);
       i++;
   }
}
sort(all(v1));
ll size=v1.size();
ll area=v1[size-2]*v1[size-1];
if(size==1)area=0;
//cout<<area<<endl;
if(area>0)cout<<area<<endl;
else cout<<-1<<endl;
}
int main()
{
fast_io;
cases;
}