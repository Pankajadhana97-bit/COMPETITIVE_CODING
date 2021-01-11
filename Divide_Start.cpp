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
//code here
ll num;
cin>>num;
string str=to_string(num);
bool flag=false;
for(ll i=0;i<str.size();i++)
{
    if((str[i]-'0'==5 )or (str[i]-'0'==0))
    {
    flag=true;
    break;
    }
}
if(flag)cout<<1<<"\n";
else cout<<0<<"\n";
}
int main()
{
fast_io;
cases;
//solve()
}