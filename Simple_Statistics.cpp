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
//code here
ll n,k;
cin>>n>>k;
vector<ll>v(n);
for(auto &x:v)cin>>x;
sort(all(v));
ll start=k;
ll end=n-k;
long long sum=0;
for(;start<end;start++) sum+=v[start];
float val=((1.00*sum)/(n-(2*k)));
cout<<fixed<<setprecision(6)<<val<<endl;

}
int main()
{
fast_io;
cases;
}