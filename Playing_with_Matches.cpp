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
int a,b;
cin>>a>>b;
int res=a+b;
string s=to_string(res);
//cout<<s<<endl;
int count=0;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='0' || s[i]=='6' || s[i]=='9')count+=6;
    else if(s[i]=='1')count+=2;
    else if(s[i]=='2'|| s[i]=='3' || s[i]=='5')count+=5;
    else if(s[i]=='4')count+=4;
    else if(s[i]=='7')count+=3;
    else if(s[i]=='8')count+=7;
}
cout<<count<<endl;
}
int main()
{
fast_io;
cases;
}