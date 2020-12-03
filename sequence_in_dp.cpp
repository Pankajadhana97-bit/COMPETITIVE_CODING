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
int dp[10];
int recurrence(int num)
{
  dp[0]=2;
  dp[1]=2;
  dp[2]=2*dp[0]*dp[1];
  for(int i=3;i<=num;i++)
  {
      dp[i]=dp[i-1]+2*dp[i-1]*dp[i-2];
  }
  return dp[num];
}
void solve()
{
    int n;
    cin>>n;
     cout<<recurrence(n)<<endl;
}
int main() 
{ 
    fast_io;
   // cases;
   solve();
} 