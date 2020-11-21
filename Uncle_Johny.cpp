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
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  int k; //the value of k 
  cin>>k;
  int val =arr[k-1];
  sort(arr,arr+n);
  for(int i=0;i<n;i++)
  {
      if(val==arr[i])
      cout<<i+1<<endl;
  }
  
}
int main() 
{ 
    fast_io;
    cases;
} 