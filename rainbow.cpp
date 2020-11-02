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
  bool flag =true;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
  cin>>arr[i];
  if(arr[i]>7)
  {
      flag=false;
      break;
  }
  }
  for(int j=0;j<n;j++)
  {
     if( abs(arr[j+1]-arr[j])==0 || abs(arr[j+1]-arr[j])==1 )
      flag=true;
      else
      flag=false;
  }
  if(flag==true)
  cout<<"yes"<<endl;
  else
  cout<<"no"<<endl;
  


}
int main() 
{ 
    fast_io;
    cases;
} 