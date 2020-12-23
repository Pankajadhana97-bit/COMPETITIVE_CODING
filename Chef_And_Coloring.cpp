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
ll n;
cin>>n;
string str;
cin>>str;
ll arr[3]={0};
for(ll i=0;i<n;i++)
{
    if(str[i]=='R')arr[0]++;
    else if(str[i]=='G')arr[1]++;
    else if(str[i]=='B')arr[2]++;
}
ll mx=*max_element(arr,arr+3);
cout<<n-mx<<endl;
}
int main()
{
fast_io;
cases;
}