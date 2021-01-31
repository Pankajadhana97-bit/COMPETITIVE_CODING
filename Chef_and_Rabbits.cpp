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
ll n;
cin>>n;
ll arr[n]; 
for(auto &x:arr)cin>>x;
ll c=1;
ll initial=arr[0];
for(;;){
    
     if( initial==0){
         break;
     }
     if(arr[initial]==0)
    {
        c=-1;
        break;
    }
    initial+=arr[arr[initial]];
    if(initial>=(n-1)){
     c++;
     break;
    }  
    c++; 
}
if(n==1)c=0;
cout<<c<<endl;
}
int main()
{
fast_io;
cases;

}