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
int n;
cin>>n;
if(n==1)cout<<"Grinch"<<endl;
if(n%2==1)cout<<"me"<<endl;
else 
{
    n=n/2;
    if(n%3==0)cout<<"Grinch"<<endl;
    else
    {
        cout<<"me"<<endl;
    }
     
}
}
int main()
{
fast_io;
cases;
}