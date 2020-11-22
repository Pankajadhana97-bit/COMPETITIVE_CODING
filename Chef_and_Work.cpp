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
  	ll n,k;
	cin>>n>>k;
	ll arr[n];
	for(ll i=0;i<n;i++) cin>>arr[i];
		ll sum = 0;
		ll count = 0;
		for(ll i=0;i<n;i++) {
			if(k < arr[i]) {
				count = -1;
				break;
			}
			sum += arr[i];
			if(sum > k) {
				count++;
				sum = arr[i];
			}
			else if(sum == 0) 
            {
				count++;
				sum = 0;
			}
		}
		if(sum != 0 && count != -1) {
			count++;
		}

		cout<<count<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 