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
string str;
cin>>s>>str;
int len=s.length();
int lens=str.length();
bool flag=false;
for(int i=0;i<len;i++)
for(int j=0;j<lens;j++)
{
 if(s[i]==str[j])
 {
 flag=true;break;
 }
 }
if(flag==true)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
int main()
{
fast_io;
cases;
}