#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,flag=0;
	    cin>>n;
	    vector<ll>v(n);
	    for(ll i=0;i<n;i++)
	        cin>>v[i];
	    ll i=0,j=n-1;
	    sort(v.begin(),v.end());
	    while(i<j)
	    {
	        if(v[i]+v[j]==2000)
	        {
	            cout<<"Accepted"<<endl;
	            flag=1;
	            break;
	        }
	        if(v[i]+v[j]>2000)
	            j--;
	        if(v[i]+v[j]<2000)
	            i++;
	    }
	    if(flag==0)
	        cout<<"Rejected"<<endl;
	}
	return 0;
}