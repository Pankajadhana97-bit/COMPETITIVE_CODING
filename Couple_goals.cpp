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
 vector<int>v;
 vector<int>v1;
 for(int i=100;i<1000;i++)
 {
    if(i%3==0 && i%4!=0)
     {
         int val;
         cin>>val;
         v1.push_back(val);
     }
 }
 cout<<v1.size()<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 