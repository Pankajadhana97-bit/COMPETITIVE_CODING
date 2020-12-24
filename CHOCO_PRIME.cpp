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
bool isPrime(ll n) 
{ 
    if (n<=1) 
        return false; 
    for (ll i=2; i<n;i++) 
        if (n%i==0) 
            return false; 
    return true; 
} 
void solve()
{
ll num;
cin>>num;
if(isPrime(num)==true)
{
   string str=to_string(num);
   string s=str;
   reverse(s.begin(),s.end());
   if(str==s)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
}
else cout<<"No"<<endl;
}
int main()
{
fast_io;
cases;
}