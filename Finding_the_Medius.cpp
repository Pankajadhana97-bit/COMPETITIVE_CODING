#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ll n;
	ll k=0;
	cin>>n;
	ll v[n];
	vector<double>res;
	for(ll i=0;i<n;i++)
	cin>>v[i];
	cin>>k;
	for(ll i=0;i<=n-k;i++)
	{
	        vector<double>temp;
	        for(ll j=i;j<i+k;j++)
	        temp.push_back(v[j]);
	        sort(temp.begin(),temp.end());
	        double temp1;
	        if(k%2==1)
	        temp1=temp[k/2];
	        else
	        temp1=(temp[k/2-1]+temp[k/2])/2.00;
    	    res.push_back(temp1);
    	    temp.clear();
	}
	for(ll i=0;i<res.size();i++)
	cout<<res[i]<<" ";
	return 0;
}