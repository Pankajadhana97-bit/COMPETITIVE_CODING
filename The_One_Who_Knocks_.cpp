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
  long long int x;
  long long int y;
  cin>>x>>y;
  if(y>=0 && x>=0)
  cout<<"1"<<endl;
  if(x>=0 && y<0)
  cout<<"2"<<endl;
  if(x<0 && y>=0)
  cout<<"2"<<endl;
  if(x<0 && y<0)
  cout<<"1"<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 