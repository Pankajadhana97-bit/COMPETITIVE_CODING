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
int n,k;
cin>>n>>k;
vec v(n);
for(auto &x:v)cin>>x;
sort(all(v));
int start=k-1;
int end=n-k-1;
int sum=0;
for(;start<end;start++) sum+=v[start];
float val=(sum/(n-2*k));
cout<<fixed<<setprecision(6)<<val<<endl;

}
int main()
{
fast_io;
cases;
}