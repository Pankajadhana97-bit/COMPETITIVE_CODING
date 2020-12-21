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
int n;
cin>>n;
int ans=0;
int val;
for(int i=0;i<2*n;i++)
    cin>>val;
    for(int i=1;i<=n;i++)
      ans^=i;
      cout<<ans<<endl;
}
int main()
{
fast_io;
cases;
}