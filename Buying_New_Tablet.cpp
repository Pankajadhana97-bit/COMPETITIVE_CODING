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
int n,b;
cin>>n>>b;
vector<pair<int ,int >>v;
for(int i=0;i<n;i++)
{
    int width;cin>>width;
    int length;cin>>length;
    int price;cin>>price;
    int val=width*length;
    v.push_back(make_pair(price,val));
}
int mx=0;
for(auto &x:v)
{
    if(x.first<=b)
    mx=max(mx,x.second);
}
if(mx==0)cout<<"no tablet"<<endl;
else cout<<mx<<endl;
}
int main()
{
fast_io;
cases;
}