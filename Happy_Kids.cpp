#include<iostream>
#include<algorithm>
#include<vector>
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
int mx=*max_element(all(v));
int mn=*min_element(all(v));
if((mx-mn)>=k)cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}
int main()
{
fast_io;
cases;
}