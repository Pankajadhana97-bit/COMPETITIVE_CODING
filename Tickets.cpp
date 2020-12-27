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
bool madarchod(string str)
{
    if(str[0]==str[1])
        return false;
    else
    {
        for(int i=0;i<str.length()-2;i++)
            if(str[i]!=str[i+2])
                return false;
        return true;
    }
    
}
void solve()
{
//code here
string str;
cin>>str;
if(madarchod(str))cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}
int main()
{
fast_io;
cases;
}