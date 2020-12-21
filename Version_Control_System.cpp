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
//Hope for ac this tym 
int n,m,k;
cin>>n>>m>>k;
vector<bool>tracked(n,0);for(int i=1;i<=m;i++){
       int a;
       cin>>a;
       tracked[a]=true;
}
vector<bool>ignore(n,0);for(int j=1;j<=k;j++){
    int b;
    cin>>b;
    ignore[b]=true;
}
int ans=0;
int res=0;
for(int i=1;i<=n;i++)
{
    ans+=(int)(tracked[i] && ignore[i]);
    res+=(int)(!tracked[i] && !ignore[i]);
}
cout<<ans<<" "<<res<<endl;
}
int main()
{
fast_io;
cases;
}