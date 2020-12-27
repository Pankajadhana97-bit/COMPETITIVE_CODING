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
int num;
cin>>num;
if(num>100)
cout<<0<<endl;
if(num>50 and num<=100)
cout<<50<<endl;
if(num>0 and num<=50)
cout<<100<<endl;
}
int main()
{
fast_io;
//cases;
solve();
}