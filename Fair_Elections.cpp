#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<int>
#define all(v) v.begin(),v.end()
#define pi 3.14159265358993
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
ll n,m;
cin>>n>>m;
vec v(n);
vec v1(m);
for(auto &x:v)cin>>x;
for(auto &r:v1)cin>>r;
int pa=accumulate(all(v),0);
int pb=accumulate(all(v1),0);
if(pa>pb)cout<<0<<endl;
else
{
    ll count=0;
    bool flag=false;
    sort(all(v));sort(all(v1));
    for(ll i=0;i<min(n,m);i++)
    {
        pa=pa-v[i]+v1[m-1-i];
        pb=pb+v[i]-v1[m-1-i];
        count++;
        if(pa>pb){
        flag=true;
        break;
        }
    }
    if(flag)
    cout<<count<<endl;
    else cout<<-1<<endl;
}
} 
int main()
{
fast_io;
cases;
//solve()
}