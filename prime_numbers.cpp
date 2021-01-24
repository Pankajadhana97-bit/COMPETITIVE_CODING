#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void prime(ll n){
	ll prime[1000]={0};
	  for(ll i=2;i<=n;i++)
	  {
		if(prime[i]==0) 
		for(ll j=i*i;j<=n;j+=i)
			prime[j]=1;
	  }
	  for(ll j=2;j<=n;j++)
		if(prime[j]==0)
		 cout<<j<<" ";
	}
int main()
{
	ll n;
	cin>>n;
	prime(n);
    return 0;
}