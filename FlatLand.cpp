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
ll num;
cin>>num;
ll count=0;
for(;;){
ll res=sqrt(num);
num-=res*res;
count++;
if(num<=0)
break;
}
cout<<count<<endl;
}
int main()
{
fast_io;
cases;
}