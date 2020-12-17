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
 vector<int >v(n);
 for(int i=0;i<n;i++)cin>>v[i];
 cout<<v[0]<<" ";
 for(int i=1;i<n/2+1;i++)
 {
     cout<<v[n-i]<<" "<<v[i]<<" ";
     if(i==n/2+1)
     cout<<v[n-1];
 }
 cout<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 