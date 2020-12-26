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
// according to the que. we have two conditions
float num;cin>>num;
float v1;cin>>v1;
float v2;cin>>v2;
float t1=sqrt(2)/v1;
float t2=2/v2;
if(t1>t2)cout<<"Elevator"<<endl;
else cout<<"Stairs"<<endl;
}
int main()
{
fast_io;
cases;
}