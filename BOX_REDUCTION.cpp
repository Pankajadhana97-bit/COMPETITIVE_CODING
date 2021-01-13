#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases long long int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<ll>
#define deb(x) cout << #x << x << endl;
#define all(v) v.begin(),v.end()
#define pi 3.1415926535897932384626433832795
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
// This que is best solved using two pointer technique 
ll n;
cin>>n;
vec arr(n);
for(auto &x:arr)cin>>x;
sort(all(arr));
ll pointer=n-1;
ll count=0;
for(ll i=n-2;i>=0;i--)
{
if(arr[pointer]!=-1)
{
if(arr[i]*2 <= arr[pointer])
	{
	arr[i]=-1;
	pointer--;
	count++;
	}
    }
    else pointer--;
	}
	cout<<n-count;
}
int main()
{
fast_io;
//cases;
solve();
}