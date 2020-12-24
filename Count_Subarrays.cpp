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
 ll num;
 cin>>num;
 vec v(num+1);
       v[0]=0;
    for(ll i=1;i<=num;i++)cin>>v[i];
      ll res=0,count=0; 
     for (ll i=1;i<=num;i++) 
    {
            if(v[i]>=v[i-1]) count++;
            else count=1; 
            res+=count;
    }
      cout<<res<<endl;

}
int main()
{
fast_io;
cases;
}