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
int res=0;
 for(int i=0;i<5;i++)
{
int val; cin>>val;
res += val;
}
if(res==0)cout<<"Beginner"<<endl;
else if(res==1)cout<<"Junior Developer"<<endl;
else if(res==2)cout<<"Middle Developer"<<endl;
else if(res==3)cout<<"Senior Developer"<<endl;
else if(res==4)cout<<"Hacker"<<endl;
else if(res==5)cout<<"Jeff Dean"<<endl;
}
int main()
{
fast_io;
cases;
}