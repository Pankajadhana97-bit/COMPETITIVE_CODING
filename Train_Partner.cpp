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
int n;
        cin>>n;
        if(n%8==0)
        {cout<<n-1<<"SL"<<endl;}
        else if(n%8==7)
        {cout<<n+1<<"SU"<<endl;}
        else if(n%8==1)
        {cout<<n+3<<"LB"<<endl;}
        else if(n%8==4)
        {cout<<n-3<<"LB"<<endl;}
        else if(n%8==2)
        {cout<<n+3<<"MB"<<endl;}
        else if(n%8==5)
        {cout<<n-3<<"MB"<<endl;}
        else if(n%8==3)
        {cout<<n+3<<"UB"<<endl;}
        else if(n%8==6)
        {cout<<n-3<<"UB"<<endl;}
}
int main()
{
fast_io;
cases;
}