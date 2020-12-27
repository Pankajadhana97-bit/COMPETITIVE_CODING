#include<iostream>
#include<vector>
#include<numeric>
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
//code here
ll n,k;
cin>>n>>k;
ll num=n;
vec v;
ll last=0;
for(ll i=k;i<=n;i+=k)
{
 if(i%k==0)
 {
 last=i%10;
 v.push_back(last);
 }
}
cout<<accumulate(all(v),0)<<endl;
}
int main()
{
fast_io;
cases;
}