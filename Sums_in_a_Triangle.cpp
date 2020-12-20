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
int n;
cin>>n;
int arr[n][n];

for(int i=0;i<n;i++)
for(int j=0;j<=i;j++)
 cin>>arr[i][j];


 for(int i=n-2;i>=0;i--)
 for(int j=0;j<=i;j++)
 arr[i][j]+=max(arr[i+1][j],arr[i+1][j+1]);

 cout<<arr[0][0]<<endl;
}
int main()
{
fast_io;
cases;
}