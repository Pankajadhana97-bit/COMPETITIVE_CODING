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
string str;
cin>>str;
int count1=0;int count0=0;
for(int i=0;i<str.size();i++)
{
    if(str[i]=='1')count1++;
    else count0++;
}
//cout<<count1<<" "<<count0<<endl;
if(count1==1)cout<<"Yes"<<endl;
else if(count0==1)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
int main()
{
fast_io;
cases;
}