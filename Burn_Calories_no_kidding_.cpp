#include<iostream>
#include<string>
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
	ll sum=0;
	for(ll i=0;i<s.size();i++)
	{
	    if(s[i]=='D')
	        sum+=238;
	    else if(s[i]=='T')
	        sum+=244;
	    else if(s[i]=='M')
	        sum+=138;
	    else if(s[i]=='B')
	        sum+=279;
	    else
	        sum+=186;
	}
	cout<<sum/50<<endl;
    sum=sum%50;
	cout<<sum/5<<endl;
	sum=sum%5;
	cout<<sum/0.5<<endl;
}
int main()
{
fast_io;
//cases;
solve();
}