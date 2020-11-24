#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll int64_t
/*--------------------------------------------------------------------*/
using namespace std;
void solve()
{
  ll n,a,k;
  cin>>n>>a>>k;
  ll num=(360*(n-2)-2*a*n);
  ll deno= n*(n-1);
  ll num1=a*deno+(k-1)*num;
  cout<<num1/__gcd(num1,deno)<<" "<<deno/__gcd(num1,deno)<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 