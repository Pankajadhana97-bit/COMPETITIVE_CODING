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
 vector<int>v(n);
 int count=0;
 for(int i=1;i<=n;i++)
 {
     for(int j=1;j<n;j++)
     if(i*j<n)
     count++;
 }
 cout<<count<<endl;
}
int main() 
{ 
    fast_io;
   // cases;
   solve();
} 