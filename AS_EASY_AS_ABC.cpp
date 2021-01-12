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
string s;
cin>>s;
int mx=0,mxx=0;
int len=s.size()-1;
int i=0,j=0;
for( i=0;i<s.size();i++)
{
    if(s[len]!=s[i])
     {mx=len-i;break;}
}
for(j=len;j>=0;j--)
{
    if(s[0]!=s[j])
    { mxx=j;break;}
}
cout<<max(mx,mxx)<<endl;
}
int main()
{
fast_io;
//cases;
solve();
}