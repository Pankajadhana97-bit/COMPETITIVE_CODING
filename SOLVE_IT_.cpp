#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
//#define ll int64_t
#define all(v)  v.begin(), v.end()
#define fill(a,n)  memset(a, 0,n)
#define pi 3.14159265358993
/*  --------------------------------------------------------------------  */
using namespace std;
void solve()
{
 int n,q;
 cin>>n>>q;
 vector<int>v(n+1);
 for(int i=1;i<=n;i++)cin>>v[i];
 while(q--)
 {
    int l,r;
    cin>>l>>r;
    set<int>s;
    for(int j=l;j<r+1;j++)s.insert(v[j]);
    if(s.size()==2)
    {
    int c=0,c1=0;
    for(int i=l;i<r+1;i++)
    {
    if(v[l]==v[i])c++;
    else c1++;
    }
    if(min(c,c1)==1)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    else
    cout<<"NO"<<endl;
 }
}
int main() 
{ 
    fast_io;
    cases;
} 