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
  int arr[n];
  int sum=0;
  for (int  i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
   sort(arr,arr+n);
  for (int  i = 0; i < n-1; i++)
  {
    for(int k=i+1;k<n;k++)
     if((arr[i]^arr[k])>arr[k])
	   sum++;
  }
  cout<<sum<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 