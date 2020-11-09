#include<bits/stdc++.h>
using namespace std;
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define all(x) (x).begin(),(x).end()
/*--------------------------------------------------------------------*/

void solve()
{
 long long int n;
 cin>>n;
 vector<long long int>arr(n);

 for(long long int i=0;i<n;i++)
  cin>>arr[i];
 vector<long long int>res(n,-1);
 long long int start = 4000000;
 for(long long int i=0;i<n;i++){
  if(res[i]!=-1)
   continue;
  else{
   arr[i]--;
   if(res[arr[i]]!=-1)
   {
    res[i]=res[arr[i]];
   }
   else{
    res[i] = res[arr[i]] = start;
    start--;
   }
  }
 }
 for(auto x:res)
  cout<<x<<" ";
 cout<<endl;
}

int main()
{
   fast_io;
   cases;
    return 0;
}