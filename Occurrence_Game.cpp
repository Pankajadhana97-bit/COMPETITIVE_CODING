#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll first_occurence(ll n,ll arr[],ll index,ll data)
{
    if(index==n)
        return -1;
    if(arr[index]==data)
        return index;
    else
    {
        ll temp=first_occurence(n,arr,index+1,data);
        return temp;
    }
    
}
ll last_occurence(ll n,ll arr[],ll index,ll data)
{
    if(index==n)
        return -1;
    ll temp=last_occurence(n,arr,index+1,data);
    if(temp==-1)
    {
        if(arr[index]==data)
            return index;
        else
            return -1;
    }
    else
        return temp;
}
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll k,n;
	    cin>>k>>n;
	    ll arr[n];
	    for(ll i=0;i<n;i++)
	        cin>>arr[i];
	    ll first=first_occurence(n,arr,0,k);
	    ll second=last_occurence(n,arr,0,k);
	    if(first==second)
	        cout<<-1<<endl;
	    else
	        cout<<first+1<<" "<<second+1<<endl;
	}
	return 0;
}