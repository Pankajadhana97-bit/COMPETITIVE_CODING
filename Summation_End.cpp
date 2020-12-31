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
ll n;
cin>>n;
ll sum=0;
for(ll i=0;i<n;i++)
{
    ll val;
    cin>>val;
    if(val==6)sum+=val;
    else
    {
        ll num=val%6;
        sum+=num;
    }
    
}
cout<<sum<<endl;
}
int main()
{
fast_io;
cases;
}