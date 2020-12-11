#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int 
#define pi 3.14159265358993
#define mod (int)1e9
#define mod7 (int)1e7
#define read(n) int n;cin>>n
#define out(n) cout<<n
/*--------------------------------------------------------------------*/
using namespace std;
void solve()
{
         ll n,x;
        cin>>n>>x;
        ll v[n];
        for(ll i=0;i<n;i++)
           cin>>v[i];
        ll j=0,count=0;
        for(ll i=0;i<x;)
        {
            if(j==n-1)
                break;
            if(v[j]==0)
            {
                j++;
                continue;
            }
            ll temp=log2(v[j]);
            ll temp1=pow(2,temp);
            ll l;
            for(l=j+1;l<n-1;l++)
            {
                if((v[l]^temp1)<v[l])
                break;
            }
            v[j]=v[j]^temp1;
            v[l]=v[l]^temp1;
            count++;
            i++;
        }
        if(n==2 && (x-count)%2==1 && (x-count)>0)
        {
            v[0]=v[0]^1;
            v[1]=v[1]^1;
        }
        for(ll i=0;i<n;i++)
        cout<<v[i]<<" ";
        cout<<endl;
          
    }
int main() 
{ 
    fast_io;
    cases;
} 