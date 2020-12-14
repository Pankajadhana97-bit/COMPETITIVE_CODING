#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int 
#define pi 3.14159265358993
#define mod (int)1e9
#define mod7 (int)1e7
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
 int n;
 cin>>n;
 int r1,r2;1
 cin>>r1>>r2;
 vector<int>v(n);
 for(int i=0;i<n;i++)cin>>v[i];
 sort(v.begin(),v.end());
 for(auto x:v)
 cout<<x<<" ";
 cout<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 