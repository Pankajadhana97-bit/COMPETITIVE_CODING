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
void solve()
{
     int n,k,i,sum=0,j;
     cin>>n>>k;
     int a[n+1];
     for(i=1;i<=n;)
     {
      if(k==0||k==n)
       break;
      if(sum+i<=i+1 && k>0)
      {
       a[i]=i;
       sum+=i;
       i++;
       k--;
       continue;
   }
   if(sum>i)
   {
    a[i]=-i;
    sum-=i;
    i++;
    if(sum>0)
     k--;
    continue;
   }
   if(sum+i >i+1 &&k==1)
   {
    a[i]=-i;
    i++;
    if(sum-i>0)
     break;
    else
    {
     sum-=i;
     continue;
    }
   }
  
   if(sum+i >i+1 &&k>1)
   {
    a[i]=i;
    if(sum>0)
     k--;
    sum+=i;
    i++;
   } 
      
  }
  if(k==n)
  {
   for(i=1;i<=n;i++)
    a[i]=i;
  }
  
  else if(i<=n)
  {
   for(;i<=n;i++)
    a[i]=-i;
  }
  
  for(i=1;i<=n;i++)
   cout<<a[i]<<" ";
  cout<<endl;
}
int main() 
{ 
    fast_io;
     cases;
    //solve();
} 