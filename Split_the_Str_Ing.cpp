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
string s;
cin>>s;
bool flag=false;
for(int i=0;i<n-1;i++)
{
 if(s[i]==s[n-1])
 {
  flag=true;
  break;
 }
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE

fast_io;
cases;
//solve();
}