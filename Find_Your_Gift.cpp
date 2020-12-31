#include<bits/stdc++.h>
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
{                                // l->(x-1,y) r->(x+1,y) u->(x,y+1)  d->(x,y-1)//
//code here
int n;
cin>>n;
string str;
cin>>str;
int x=0,y=0;
for(int i=n-1;i>=0;i--)
{
     if((str[i]==str[i-1]) || (str[i]=='L' && str[i-1]=='R') || (str[i]=='R' && str[i-1]=='L') || (str[i]=='D' && str[i-1]=='U') || (str[i]=='U' && str[i-1]=='D'))
	        continue;
    else
    {
        if(str[i]=='L')x--;
        if(str[i]=='R')x++;
        if(str[i]=='U')y++;
        if(str[i]=='D')y--;
    }
}
cout<<x<<" "<<y<<endl;
}
int main()
{
fast_io;
cases;
}