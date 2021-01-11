#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<int>
#define all(v) v.begin(),v.end()
#define pi 3.14159265358993
/* -------------------------------------------------------------------- */
using namespace std;

int dynamic[5000][5000];
int pre[5000];

int temp(int id,int val,int n,int k,vec &arr){
    if(val>=k and (pre[id]-val>=k)) return 0;
    else if(id>=n)  return 1e9;
    else if(dynamic[id][val]!=-1) return dynamic[id][val];
    return dynamic[id][val] = 1+min(temp(id+1,min(val+arr[id],pre[id]-val),n,k,arr), temp(id+1,min(pre[id]-val+arr[id],val),n,k,arr));
}
int solve2(vec &arr,int n,int k)
{
    for(int i=0;i<n/2;i++)
    swap(arr[i],arr[n-i-1]);
    for(int i=0;i<=n+10;i++)
    {
    pre[i]=0;
    for(int j=0;j<=k+10;j++) 
    dynamic[i][j]=-1;
    }
    for(int i=1;i<=n;i++)
     pre[i]=pre[i-1]+arr[i-1];
    int ans = temp(0,0,n,k,arr);
    return ans>=1e9?-1:ans;
}

void solve(){
    int n,k; cin>>n>>k;
    vec arr(n,0);
    for(int i=0;i<n;i++) 
    cin>>arr[i];
    sort(all(arr));
    if(n==1)
    {
        cout<<"-1"<<endl;
        return;
    }
    cout<<solve2(arr,n,k)<<endl;
}
int main()
{
fast_io;
cases;
}