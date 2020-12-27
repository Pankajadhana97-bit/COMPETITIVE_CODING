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
int n;
cin>>n;
string str;
cin>>str;
vec arr(n,0);
for(int i=0;i<n;i++)
{
    if(str[i]=='a' or str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u')
      arr[i]=1;
      else 
      continue;
}
//for(auto &x:arr)cout<<x<<" ";
//cout<<endl;
int count=0;
for(int i=0;i<n-1;i++)
{
    if(arr[i]==0 and arr[i+1]==1)
    count++;
    else continue;
}
cout<<count<<endl;
}
int main()
{
fast_io;
cases;
}