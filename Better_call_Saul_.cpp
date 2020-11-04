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
  int x,sum;
  cin>>n>>x;
  int arr[n];
  bool flag=true;
  for(int i=0;i>n;i++)
   cin>>arr[i];
   for(int i=0;i<x;i++)
   {
       if(flag=true)
       {
           for(int i=0;i<n;i++)
           if(arr[i]%2==0)
           arr[i]=0;
       }
       if(flag=false)
       {
           for(int i=0;i<n;i++)
           if(arr[i]%2!=0)
           arr[i]=0;
       }
       
       flag != flag;
   }
   for(int i=0;i<n;i++)
   sum+=arr[i];
   
   if(sum%2==0)
   cout<<"Walter"<<endl;
   else
   {
       cout<<"Jesse"<<endl;
   }
   
    
}
int main() 
{ 
    fast_io;
    cases;
} 