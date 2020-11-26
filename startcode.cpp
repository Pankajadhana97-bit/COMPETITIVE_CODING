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
 int n=1000;
 for(int i=0;i<n;i++)
 {
 	for(int j=0;j<i;j++)
 		cout<<"*";
 	    cout<<endl;
 }
}
int main() 
{ 
    fast_io;
    cases;
} 