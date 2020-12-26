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
ll n;cin>>n;
vec v(n);
vec v1(n);
for(auto &x:v)cin>>x;
for(auto &y:v1)cin>>y;
ll mx=*max_element(all(v));
ll mx1=*max_element(all(v1));
ll sum1=0,sum2=0;
sum1=accumulate(all(v),0);
sum2=accumulate(all(v1),0);
sum1-=mx;
sum2-=mx1;
if(sum1>sum2)cout<<"Bob"<<endl;
else if(sum1<sum2)cout<<"Alice"<<endl;
else if(sum1==sum2) cout<<"Draw"<<endl;
}
int main()
{
fast_io;
cases;
}