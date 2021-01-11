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
void solve()
{
    ll n;
    cin>>n;
    vector<char>v={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string s;
    cin>>s;
    for(ll i=0;i<n;i+=4)
    {
        string str="";
        for(ll j=i;j<i+4;j++) 
        {
            str+=s[j];
        } 
       bitset<8> bits(str);
       ll ab = bits.to_ulong();
       cout<<v[ab];
    }
    cout<<endl;
}
int main()
{
fast_io;
cases;
//solve()
}