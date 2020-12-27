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
vec v(n);
for(auto &x:v){
    cin>>x;
}
for(ll i=0;i<n;i++)
{
    ll num=v[i];
    num=num%3;
    v[i]+=num;
}
ll k;
cin>>k;
sort(all(v));
ll num1=0,num2=0;
for(ll i=1;i<n-1;i++)
{
    if(v[i]>k)
    {
    num1=v[i];
    num2=v[i-1];
    break;
    }
}
if(num1==0 and num2!=0)
cout<<num2<<" "<<-1<<endl;
else if(num2==0 and num1!=0)
cout<<-1<<" "<<num1<<endl;
else if(num1!=0 and num2!=0)
cout<<num2<<" "<<num1<<endl;
}
int main()
{
fast_io;
cases;
}