#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int 
#define pi 3.14159265358993
#define mod (int)1e9
#define mod7 (int)1e7
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
 ll n;
 cin>>n;
 vector<ll> v(n);
 int res=0;
for(int i=0;i<n;i++)cin>>v[i];
for(int j=0;j<n;j++)
{
    res^=v[j];
}
cout<<res<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 