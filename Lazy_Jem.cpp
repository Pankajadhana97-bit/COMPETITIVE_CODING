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
void solve()
{
//code here
ll num,brk,time;
cin>>num>>brk>>time;
ll ans=0;
ll m;
while(num!=0)
{
    if(num%2==0)
    {
        ans+=(num/2)*time;
        num=num-(num/2);
    }
    else
    {
        ans+=((num+1)/2)*time;
        num=num-((num+1)/2);
    }
    if(num!=0)ans+=brk;
    time=time*2;
}
cout<<ans<<endl;
}
int main()
{
fast_io;
cases;
}