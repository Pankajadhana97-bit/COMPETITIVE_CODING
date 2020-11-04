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
  int n;
  cin>>n;
  int count=0;
  int arr[n];
  int barr[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  for(int j=0;j<n;j++)cin>>barr[j];
  int karr[n];
  karr[0]=arr[0];
  for(int i=1;i<n;i++)
  karr[i]=arr[i]-arr[i-1];
  for(int j=0;j<n;j++)
  {
    if(karr[j]>=barr[j])
     count++; 
   // cout<<arr[j]<<endl;
  }
   cout<<count<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 