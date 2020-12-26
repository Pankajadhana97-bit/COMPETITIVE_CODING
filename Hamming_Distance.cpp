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
string s;
cin>>str>>s;
int len=str.size();
int c=0;
for(int i=0;i<len;i++)
{
    if(s[i]!=str[i])c++;
}
cout<<c<<endl;
}
int main()
{
fast_io;
//cases;
solve();
}