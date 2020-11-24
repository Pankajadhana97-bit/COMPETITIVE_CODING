#include <iostream> 
#define ll long long int 
using namespace std; 
  
 
int maxSum(ll arr[], ll n, ll k) 
{ 
    ll res = 0; 
    for (ll i=0; i<k; i++) 
       res += arr[i]; 
    ll curr_sum = res; 
    for (ll i=k; i<n; i++) 
    { 
       curr_sum += arr[i] - arr[i-k]; 
       res = max(res, curr_sum); 
    } 
  
    return res; 
} 
   
// Driver code 
int main() 
{   
    ll t;
    cin>>t;
    while(t--)
    {
     ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    cout << maxSum(arr, n, k);
    } 
    return 0; 
} 