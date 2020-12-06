#include<bits/stdc++.h>

/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define all(v)  v.begin(),v.end()
#define ll long long int
/* -------------------------------------------------------------------- */
using namespace std; 
void solve()
{
    int num;
    cin>>num;
    vector<int>v(num+1);
    v[0]=0;
    for(int i=1;i<=num;i++)cin>>v[i];
    int sum=0;
    for(int i=1;i<=num;i++)
    {
      sum+=v[i]*239*239;
    }
    cout<<sum<<endl;
}
int main() 
{ 
    fast_io;
    // cases;
    solve();
} 