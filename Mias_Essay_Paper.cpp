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
	    ll count=0;
	    if(s.size()%2==1)
	    {
	        ll j=s.size()-1;
	        for(ll i=0;i<s.size()/2;i++)
	        {
	            if(s[i]!=s[j])
	            {
	                count+=abs(s[j]-s[i]);
	            }
	            j--;
	        }
	        cout<<count<<endl;
	    }
	    else
	    {
	        ll j=s.size()-1;
	        for(ll i=0;i<s.size()/2;i++)
	        {
	            if(s[i]!=s[j])
	            {
	                count+=abs(s[j]-s[i]);
	            }
	            j--;
	        }
	        cout<<count<<endl;
	    }
}
int main()
{
fast_io;
cases;
}