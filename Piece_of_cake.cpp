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
vector<int>v(27);
for(int i=0;i<str.length();i++)
{
    char k=str[i];
    k=k-97;
    v[k]++;
}
sort(all(v));
int sum=0;
for(int i=0;i<26;i++)
sum+=v[i];
if(sum==v[26])cout<<"YES"<<endl;
else
{
    cout<<"NO"<<endl;
}
}
int main()
{
fast_io;
cases;
}