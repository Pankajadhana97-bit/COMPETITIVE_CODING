#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<ll>
#define all(v) v.begin(),v.end()
#define pi 3.14159265358993
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
//code here
int n;cin>>n;
 int k; cin>>k;
     int a[n];
      int sum=0;
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
          if(a[i]%2==0)
          {
              sum++;
          }
      }
      if(k==0)
      {
          if(sum!=n)
          {
              cout<<"YES";
          }
          else
          {
              cout<<"NO";
          }
      }
      else
      {

      if(sum>=k)
      {
          cout<<"YES";
      }
      else
      {
          cout<<"NO";
      }
      }
       cout<<endl;
}
int main()
{
fast_io;
cases;
}