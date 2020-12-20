#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define pi 3.14159265358993
#define mod (int)1e9
#define mod7 (int)1e7
/* -------------------------------------------------------------------- */
using namespace std;
/* void solve()
{
//code here
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
int val=0;
for(auto &x: arr)
{
    val=val^x;
}
cout<<val<<endl;
}
int main()
{
fast_io;
cases;
}

*/
void solve()
{
int n;
cin>>n;
int arr[n];
vector<int>v(1000,0);
for(int i=0;i<n;i++)cin>>arr[i];
//sort(arr,arr+n);
for(int i=0;i<n;i++)
{
    if(arr[i]==arr[i+1])
       i++;
    else
    {
    cout<<arr[i]<<endl; break;
    }
}

}
int main()
{
fast_io;
cases;
}
