#include<bits/stdc++.h>
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
 ll arr[n];
 ll mindiff=INT_MAX;
 ll minn;
 for(int i=0;i<n;i++)cin>>arr[i];
 for(int j=0;j<n-1;j++)
 {
    for(int k=j+1;k<n;k++)
    {
       minn=abs(arr[j]-arr[k]);
       mindiff= min(mindiff,minn);
    }
 }
 cout<<mindiff<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 

