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
        ll n;
	    cin>>n;
		string s1,s2;
		cin>>s1>>s2;
		ll cs10=count(s1.begin(),s1.end(),'0');
		ll cs11=count(s1.begin(),s1.end(),'1');
		ll cs20=count(s2.begin(),s2.end(),'0');
		ll cs21=count(s2.begin(),s2.end(),'1');
		if(cs10==cs20 && cs11==cs21)
		    cout<<"Yes"<<endl;
		else
		    cout<<"No"<<endl;
}
int main()
{
fast_io;
cases;
}