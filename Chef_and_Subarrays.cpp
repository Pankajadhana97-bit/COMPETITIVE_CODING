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
 ll n,count=0;
	    cin>>n;
	    vector<ll>v(n);
	    for(ll i=0;i<n;i++)
	        cin>>v[i];
	    for(ll i=0;i<n;i++)
	    {
	        ll sum=0,p=1;
	        for(ll j=i;j<n;j++)
	        {
	            sum+=v[j];
	            p*=v[j];
	            if(sum==p)
	                count++;
	        }
	    }
	    cout<<count<<endl;
}
int main()
{
fast_io;
cases;
}