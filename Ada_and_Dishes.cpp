#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define all(x) x.begin(),x.end()
/*--------------------------------------------------------------------*/
using namespace std;
void solve()
{
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++) cin>>v[i];
 sort(all(v),greater<int>());
 //for(auto x: v)cout<<x<<" ";
 if(n==1)
 cout<<v[0];
 if(n==2)
 cout<<v[0]<<endl;
 if(n==3)
 {
   int a,b;
   a=v[0];
   b=v[1];
   int count=b;
   a=a-b;
   b=v[2];
   cout<<count+max(a,b)<<endl;
 }
 if(n==4)
 {
   int a,b;
   int count=0;
   a=v[0];
   b=v[1];
   count+=v[1];
   a=a-b;
   b=v[2];
   count=count+min(a,b);
   if(a>=b)
   {
     a=a-b;
     count+=max(a,v[3]);
   }
   else
   {
     b=b-a;
     count+=max(b,v[3]);
   }
   cout<<count<<endl;
   
 }
 }
int main() 
{ 
    fast_io;
    cases;
} 