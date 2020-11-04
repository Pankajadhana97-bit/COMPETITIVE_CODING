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
  int n,count=0;
  cin>>n;
  bool flag=true;
  for(int i=0;i<1000;i++)
  {
    if(n%10==0)
    {
        break;
        flag=false;
    }
    if(n%5==0)
    {
        count=1;
        break;
        flag=false;
    }
    else
    {
        count=-1;
        flag=false;
    }
  }
  if(flag==true)
    cout<<count<<endl;
    else
    {
        cout<<"-1"<<endl;
    }
}
int main() 
{ 
    fast_io;
    cases;
} 