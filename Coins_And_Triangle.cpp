#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
/*--------------------------------------------------------------------*/
using namespace std;
int sum( int h)
{
   return h*(h+1)/2;
}
void solve()
{
 int n;
 cin>>n;
 int h=1;
 while(sum(h)<=n)
 {
    h++;
 }
 cout<<h-1<<endl;
}
int main() 
{ 
    fast_io;
    cases;
   // solve();
} 