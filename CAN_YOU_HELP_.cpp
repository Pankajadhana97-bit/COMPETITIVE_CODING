#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll int64_t
/*--------------------------------------------------------------------*/
using namespace std;
void solve()
{
        ll n,x;
	    cin>>n>>x;
	    ll odd=ceil(n/2);
	    ll odd_swap=((odd-1)*odd)/2;
	    ll even=n-odd;
	    ll even_swap=((even-1)*even)/2;
	    ll res=(odd_swap+even_swap)*2;
	    if(res<x)
	        cout<<x-res<<" Loss"<<endl;
	   if(res>x)
	    cout<<res-x<<" Profit"<<endl;
	    if(res==x)
	     cout<<"0 Null"<<endl;
       
}
int main() 
{ 
    fast_io;
    cases;
} 