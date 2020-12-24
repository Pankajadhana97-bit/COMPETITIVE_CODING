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
int n,m;
cin>>n>>m;
for(int i=1;i<=m;i++)
{
    int val=__gcd(n,m);
    int val1=__gcd((n+val),m);
    cout<<val1<<" ";
}
cout<<endl;
}
int main()
{
fast_io;
cases;
}