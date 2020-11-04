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
  int arr[4];
  for(int i=0;i<4;i++)
  cin>>arr[i];
 sort(arr,arr+4);
 if(arr[0]==arr[1] && arr[2]==arr[3])
 cout<<"YES"<<endl;
 else
 {
     cout<<"NO"<<endl;
 }
 




}
int main() 
{ 
    fast_io;
    cases;
} 