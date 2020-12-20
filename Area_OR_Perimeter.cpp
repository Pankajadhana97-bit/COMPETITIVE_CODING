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
void solve()
{
//code here
int l,b;
cin>>l>>b;
int area=l*b;
int Peri=2*(l+b);
if(Peri>area)cout<<"Peri"<<endl<<Peri<<endl;
else if(Peri<area)
 cout<<"Area"<<endl<<area<<endl;
 else
 cout<<"Eq"<<endl<<area<<endl;
}
int main()
{
fast_io;
//cases;
solve();
}