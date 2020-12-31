#include<iostream>
#include<vector>
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
vec res;
ll i;
for(i=1;i<=n;i++)
{
    ll num;
    cin>>num;
    if(num!=i)
    res.push_back(num);
}
ll len=res.size();
bool flag=true;
for(int i=0;i<len;i++)
{
    if(res[i]<res[i+1]){flag=false;break;}
}
if((len!=0)  and flag==true)
cout<<res[len-1]<<" "<<res[0];
else 
cout<<0<<" "<<0<<endl;
}
int main()
{
fast_io;
//cases;
solve();
}