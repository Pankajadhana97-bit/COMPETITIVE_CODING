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
string str;
cin>>str;
int len=str.size();
vec freq(26,0);
for(char c:str)  freq[(int)c-'a']++;
int sum=0;
for(int i=0;i<26;i++) sum+=freq[i]/2;

cout<<min(sum,len/3)<<endl;
}
int main()
{
fast_io;
cases;
}