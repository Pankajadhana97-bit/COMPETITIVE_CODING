#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll int64_t
#define pi 3.14159265358993
#define mod (int)1e9
#define mod7 (int)1e7
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
 int n;
 cin>>n;
 int k;
 cin>>k;
vector<int> v;
for(; n; n/=10)
v.push_back( n%10 );
reverse(v.begin(),v.end());
for(int i=0;i<v.size();i++)
{
    if(k>0)
    {
        cout<<9;
        k--;
    }
    else
    cout<<v[i]; 
}
cout<<endl;
}
int main() 
{ 
    fast_io;
    //cases;
    solve();
} 