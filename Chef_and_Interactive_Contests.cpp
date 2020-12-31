#include<iostream>
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
ll n,k;
cin>>n>>k;
for(ll i=0;i<n;i++)
{
ll x;
cin>>x;
if(x<k)cout<<"Bad boi"<<endl;
else cout<<"Good boi"<<endl;
}

}
int main()
{
fast_io;
//cases;
solve();
}