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
ll n;
cin>>n;
string str;
cin>>str;
ll count=0;
for(ll i=0;i<n;i++)
{
    if(str[i]-'0'==0)count++;
}
//cout<<count<<endl;
double percentage=(count/120.00)*100;
double pre=100-percentage;
//cout<<pre<<endl;
if(pre>=75)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
int main()
{
fast_io;
cases;
}