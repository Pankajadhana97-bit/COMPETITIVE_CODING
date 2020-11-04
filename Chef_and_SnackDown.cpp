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
  int arr[]={2010, 2015, 2016, 2017, 2019};
  int num;
  cin>>num;
  if(binary_search(arr,arr+5,num))
  cout<<"HOSTED"<<endl;
  else
  {
      cout<<"NOT HOSTED"<<endl;
  }
}
int main() 
{ 
    fast_io;
    cases;
} 