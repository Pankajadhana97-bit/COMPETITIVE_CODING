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
 int num;
 cin>>num;
 vector<int>v(num);
 for(int i=0;i<num;i++)
 cin>>v[i];
 vector<int>ans(num,0);
 for(int i=0;i<num;i++)
 {
     if(ans[v[i]]==0)
     ans[v[i]]=v[i];
     else
     {
         if(ans[i]==0)  
         ans[i]=0;
     }
     
 }
 for(int i=0;i<num;i++)
 cout<<ans[i]<<" ";
 cout<<endl;
 }

int main() 
{ 
    fast_io;
    cases;
} 