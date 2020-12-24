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
string s1,s2,s3,s4;
cin>>s1>>s2>>s3>>s4;
vector<string>v(4);
for(auto &x:v)cin>>x;
int count=0;
for(int i=0;i<4;i++)if(v[i]==s1)count++;
for(int i=0;i<4;i++)if(v[i]==s2)count++;
for(int i=0;i<4;i++)if(v[i]==s3)count++;
for(int i=0;i<4;i++)if(v[i]==s4)count++;
if(count>=2)cout<<"similar"<<endl;
else cout<<"dissimilar"<<endl;
}
int main()
{
fast_io;
cases;
}