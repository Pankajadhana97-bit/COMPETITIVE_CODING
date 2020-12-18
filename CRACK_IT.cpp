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
 ll n,k;
 cin>>n>>k;
 ll mount=0;
 ll count=0;
 vector<ll>v(n,k);

 for(ll i=0;i<n;i+=2)
 {
   count+=v[i];
 }
 for(ll i=1;i<n;i+=2)
 {
   mount+=v[i];
 }
 cout<<max(count,mount)<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 