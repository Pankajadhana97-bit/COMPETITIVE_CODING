#include <iostream>
using namespace std;
#define ll long long int 
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll k;
	    cin>>k;
	    if(k==1)
	        cout<<"*\n";
	    else if(k==3)
	        cout<<"*\n  *\n *\n";
	    else
	    {
    	    cout<<"*\n";
    	    ll temp=1;
    	    for(ll i=2;i<=(k/2+1);i++)
    	    {
    	        for(ll j=1;j<=temp;j++)
    	            cout<<" ";
    	        cout<<"*\n";
    	        temp++;
    	    }
    	    ll temp1=k/2-1;
    	    for(ll i=1;i<k/2;i++)
    	    {
    	        for(ll j=1;j<=temp1;j++)
    	            cout<<" ";
    	        cout<<"*\n";
    	        temp1--;
    	    }
    	    cout<<"*\n";
	    }
	}
	return 0;
}