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
  ll k;
		cin>>k;
		if(k==1)
		    cout<<"1\n";
		else if(k==2)
		    cout<<"1\n23\n";
		else if(k==3)
		    cout<<"1\n23\n456\n";
		else
		{
    		cout<<"1\n"<<"23\n";
    		ll temp=1,count=4;
    		for(ll i=3;i<k;i++)
    		{
    		    cout<<count;
    		    count++;
    		    for(ll j=0;j<temp;j++)
    		        cout<<" ";
    		    cout<<count;
    		    count++;
    		    temp++;
    		    cout<<"\n";
    		}
    		for(ll i=0;i<k;i++)
    		{
    		    cout<<count;
    		    count++;
    		}
    		cout<<"\n";
		}
}
int main()
{
fast_io;
cases;
//solve()
}