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
string s;
cin>>s;
int counter=0;
for(int i=0;i<n;i++)
{
 if(s[i]=='H')counter++;
 else if(s[i]=='T')counter--;
 if(counter<0 or counter>1)
 {
     cout<<"Invalid"<<endl;
     return;
 }
}
if(counter==0)cout<<"Valid"<<endl;
else cout<<"Invalid"<<endl;
}
int main()
{
fast_io;
cases;
}