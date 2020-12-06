#include<bits/stdc++.h>

/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define all(v)  v.begin(),v.end()
#define ll long long int
/* -------------------------------------------------------------------- */
using namespace std; 
int FindMaxSum(int arr[], int n) 
{ 
  int incl = arr[0]; 
  int excl = 0; 
  int excl_new;  
  for (int i=1;i<n;i++) 
  { 
     excl_new = (incl > excl)? incl: excl; 
     incl = excl + arr[i]; 
     excl = excl_new; 
  } 
   return ((incl > excl)? incl : excl); 
} 
  
void solve()
{
  int num;
  cin>>num;
  int arr[num];
  for(int i=0;i<num;i++)
  cin>>arr[i];
  cout<<FindMaxSum(arr,num)<<endl;
}
int main() 
{ 
    fast_io;
     solve();
} 