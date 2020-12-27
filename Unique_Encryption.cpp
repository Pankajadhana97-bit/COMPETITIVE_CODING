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
  string s;
	    cin>>s;
	    ll arr[5]={98,57,31,45,46};
	    for(ll i=0;i<s.size();i++)
	    {
	        ll k=(s[i]-65)+arr[i];
	        char ch=(k%26)+65;
	        cout<<ch;
	    }
	    cout<<endl;
}
int main()
{
fast_io;
cases;
}