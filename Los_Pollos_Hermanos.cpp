#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
using namespace std;
void solve()
{
  long long int n;
  cin>>n;
  long long int arr[n];
  for(long long int i=0;i<n;i++)
  cin>>arr[i];
  long long int val=pow(2,n-1)-1;
  for(long long int i=0;i<n;i++)
  {
      if(i<3)
      cout<< val%1000000007<<" ";
      if(i>2)
      {
          cout<<(val-1)%1000000007<<" ";
      }
  }
  cout<<endl;

}
int main() 
{ 
    fast_io;
    cases;
} 