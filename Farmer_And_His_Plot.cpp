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
void solve()
{
  int x,y,val;
  cin>>x>>y;
  int area=x*y;
  for(int i=2;i<100;i++)
  {
    if(area%(i*i)==0)
    {
         val=area/(i*i);
    }
  }
  cout<<val<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 