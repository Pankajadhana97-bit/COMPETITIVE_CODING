#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll int64_t
#define pi 3.14159265358993
/*--------------------------------------------------------------------*/
using namespace std;
void solve()
{
 ll n;
 cin>>n;
 ll count=0;
 ll sum;
 ll arr[n];
 for(ll i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 for(ll i=0;i<n;i++)
 {
     count+=arr[i];
     sum+=arr[i]
     count--;
     if(count=0)
     break;
 }
 cout<<sum<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 