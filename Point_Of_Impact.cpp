#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<int>
#define all(v) v.begin(),v.end()
#define pi 3.14159265358993
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
ll n,k,x,y;
cin>>n>>k>>x>>y;
vector<pair<ll,ll>>p;
if(x==y)
{
cout<<n<<" "<<n<<endl;
     return;
}
else if(x<y)
{
  p.push_back(make_pair((x+n-y),n));
  p.push_back(make_pair(n,(n-y+x)));
  p.push_back(make_pair((y-x),0));
  p.push_back(make_pair(0,(y-x)));
}
else
{
  p.push_back(make_pair(n,(y+n-x)));
  p.push_back(make_pair((y+n-x),n));
  p.push_back(make_pair(0,(x-y)));
  p.push_back(make_pair((x-y),0));  
} 
ll val=(k-1)%4;
cout<<p[val].first<<" "<<p[val].second<<endl;
}
int main()
{
fast_io;
cases;
}