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
//code here
int a,b;
cin>>a>>b;
string res="";
while(a or b){
    int temp=(a%10)+(b%10);
    res=to_string(temp%10)+res;
    a=a/10;
    b=b/10;
}
cout<<stoi(res)<<endl;
}
int main()
{
fast_io;
cases;
//solve()
}