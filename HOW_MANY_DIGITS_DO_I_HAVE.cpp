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
string num;
cin>>num;
int len=num.size();
if(len==1)cout<<"1"<<endl;
else if(len==2)cout<<"2"<<endl;
else if(len==3)cout<<"3"<<endl;
else
cout<<"More than 3 digits"<<endl;
}
int main()
{
fast_io;
//cases;
solve();
}