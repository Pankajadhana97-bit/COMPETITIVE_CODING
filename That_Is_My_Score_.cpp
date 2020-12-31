#include<iostream>
#include<vector>

/* __Pankaj_Adhana__ */
/* __Panjab_university__ */

/* ----------------//__Defined values__//------------------------------  */

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
ll n;
cin>>n;
vec v(12,0);
for(ll i=0;i<n;i++){
    ll val;cin>>val;
    ll num;cin>>num;
    if(v[val]<num)
     v[val]=num;
    else continue;
}
ll sum=0;
for(ll i=0;i<9;i++)
    sum+=v[i];
    cout<<sum<<endl;
}
int main()
{
fast_io;
cases;
}