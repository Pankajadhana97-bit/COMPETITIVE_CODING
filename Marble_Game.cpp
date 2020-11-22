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
  ll n;
	    cin>>n;
	    if(n==1 || n%2==0)
	    {
	        cout<<"B"<<endl;
	        continue;
	    }
	    if(n==3)
	    {
	        cout<<"A"<<endl;
	        continue;
	    }
	    if(n%2==1)
	    {
	        cout<<"B"<<endl;
	        continue;
	    }
}
int main() 
{ 
    fast_io;
    cases;
} 