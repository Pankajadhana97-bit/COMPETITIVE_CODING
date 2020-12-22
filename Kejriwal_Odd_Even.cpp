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
string s;
cin>>s;
ll len=s.length();
ll sum=0,oddsum=0;
for(ll i=0;i<len;i++)
{
    if((s[i]-'0')%2==0)
    sum+=s[i]-'0';
    if((s[i]-'0')%2==1)
    oddsum+=s[i]-'0';
}
if(sum%4==0 || oddsum%3==0)
cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
int main()
{
fast_io;
cases;
}