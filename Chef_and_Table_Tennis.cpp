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
int len=str.size();
int zero=0,one=0;
bool flag=true;
for(int i=0;i<len;i++)
{
    if(str[i]-'0'==1)one++;
    else zero++;
}
if(zero>one)flag=false;
if(!flag)cout<<"LOSE"<<endl;
else cout<<"WIN"<<endl;
}
int main()
{
fast_io;
cases;
}