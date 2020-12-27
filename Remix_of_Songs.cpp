#include<bits/stdc++.h>
#include<sstream>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<ll>
#define all(v) v.begin(),v.end()
#define pi 3.14159265358993
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
//code here
 string s;
    getline(cin,s);
    vector<string>v;
    stringstream ss(s);
    while(ss>>s)
    {
        v.push_back(s);
    }
    ll min=INT_MAX;
    string temp1;
    for(ll i=0;i<v.size();i++)
    {
        ll temp=v[i].size();
        if(temp<min)
        {
            min=temp;
            temp1=v[i];
        }
    }
    for(ll i=0;i<v.size();i++)
        cout<<temp1<<" "<<v[i]<<" ";
    cout<<temp1;
}
int main()
{
fast_io;
//cases;
solve();
}