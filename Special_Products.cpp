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
 int x;
 cin>>x;
 int n;
 cin>>n;
 int count=0;
 int sum=0;
 int arr[n];
 for(int i=0;i<n;i++)cin>>arr[i];
 for(int i=0;i<n;i++)
 {
     if(arr[i]<x)count++;
 }
 for(int i=0;i<n;i++)
 {
     for(int j=i;j<n;j++)
     {
         if(arr[i]*arr[j]<x)sum++;
     }
 }
 cout<<count+sum/2<<endl;
}
// 
int main() 
{ 
    fast_io;
    cases;
} 