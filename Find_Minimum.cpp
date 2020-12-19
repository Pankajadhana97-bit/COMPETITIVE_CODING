#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define pi 3.14159265358993
#define mod (int)1e9
#define mod7 (int)1e7
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
ll n;
cin>>n;
ll div;
ll sum;
ll new_sum=LONG_LONG_MAX;

ll i;
for(i=sqrt(n);i>0;i--)
{
    if(n%i==0)
    {
     div=n/i;
     sum=div+i;
    }
    new_sum=min(new_sum,sum);   
}
 cout<<new_sum<<endl;
}
int main()
{
fast_io;
cases;
}