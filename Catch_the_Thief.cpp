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
ll x,y,k,n;
cin>>x>>y>>k>>n;
bool flag=false;
if(x<y)
while(true)
{
    x=x+k;
    y=y-k;
   if(x>n || y>n)break;
   if(x<0 || y<0)break;
   if(x==y)
   {
    flag=true;
   break;
   
   }
}
if(x>y)
while(true)
{
   x=x-k;
   y=y+k;
   if(x>n || y>n)break;
   if(x<0 || y<0)break;
   if(x==y)
   {
 flag=true;
   break;
  
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