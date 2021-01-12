#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases long long int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<int>
#define deb(x) cout << #x << x << endl;
#define all(v) v.begin(),v.end()
#define pi 3.1415926535897932384626433832795
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
//code here
int n;
cin>>n;
vec v(n);
for(auto &x:v)cin>>x;
vec hash(1001,0);
for(int i=0;i<n;i++)
{
    hash[v[i]]++;
}
int sum=0;
for(int i=0;i<1001;i++)
{
 if(hash[i]>0)
 {
  float res=hash[i]/2.0;
  sum+= ceil(res);
 }
}
cout<<sum<<endl;
}
int main()
{
fast_io;
//cases;
solve();
}