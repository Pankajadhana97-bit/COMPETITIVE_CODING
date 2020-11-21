#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll int64_t
/*--------------------------------------------------------------------*/
using namespace std;
void solve()
{
  int Q;
  cin>>Q;
  for(int i=1;i<=Q;i++)
  {
    int face;cin>>face;
    int n;cin>>n;
    int out;cin>>out;
    if(n%2!=0)
    {
        if(face==out)cout<<n/2<<endl;
        if(face != out)cout<<(n/2)+1<<endl;
    }
    else
    cout<<n/2<<endl;


  }
}
int main() 
{ 
    fast_io;
    cases;
} 