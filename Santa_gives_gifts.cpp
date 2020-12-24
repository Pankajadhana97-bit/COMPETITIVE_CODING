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
ll m;
cin>>m;
ll a;cin>>a;
ll d;cin>>d;
int arr[5];
for(int i=0;i<5;i++)
{
    arr[i]=a+(i*d);
}
ll count=0;
for(ll i=n;i<=m;i++)
{
    ll val=i%arr[4];
    for(int j=0;j<5;j++)
    {
        if(val==arr[j])count++;
    }
}
//cout<<count<<endl;
cout<<arr[4];
}
int main()
{
fast_io;
cases;
}