#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<int>
#define all(v) v.begin(),v.end()
#define pi 3.14159265358993
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
int n,k;
cin>>n>>k;
string str;
cin>>str;
string s=str;
transform(all(s),s.begin(),::toupper);
int c=0,c1=0;
for(int i=0;i<n;i++)
{
    if(s[i]==str[i])c++;
    else c1++;
}
if(c<=k and c1>k)
cout<<"chef"<<endl;
else if(c1<=k and c>k)
cout<<"brother"<<endl;
else if(c>k and c1>k)
cout<<"none"<<endl;
else cout<<"both"<<endl;
}
int main()
{
fast_io;
cases;
//solve()
}