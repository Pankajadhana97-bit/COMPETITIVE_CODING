#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases long long int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<int>
#define deb(x) cout << #x << x << endl;
#define all(v) v.begin(),v.end()
#define pi 3.1415926535897932384626433832795
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
//code here
    ll n,x,y;
    cin>>n>>x>>y;
    ll ans=0,cnt=0;
    ll s=0;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    
    if(s<x)
    {
        cout<<"-1\n";
        return;
    }
   for(ll i=0;i<n;i++)
    {
        cnt+=a[i];
        if(cnt>=x && cnt<=y)
        {
            cout<<"0\n";
            return ;
        }
    }
   for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            swap(a[i],a[j]);
           for(ll k=0;k<n;k++)
            {
                cnt+=a[k];
                if(cnt>=x && cnt<=y)
                {
                    cout<<1<<endl;
                    return ;
                }
            }
            swap(a[i],a[j]);
        }
    }
    
    cout<<2<<endl;

}
int main()
{
fast_io;
cases;
//solve();
}