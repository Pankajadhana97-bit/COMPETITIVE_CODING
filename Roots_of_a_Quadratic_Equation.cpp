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
// according to the que we have given that Ax^2+Bx+c=0;
 double a,b,c;
cin>>a>>b>>c;
 double disc=sqrt((b*b)-(4*a*c));
 double x1= ((-1*b)-disc)/(2*a);
 double x2= ((-1*b)+disc)/(2*a);
cout<<fixed;
cout<<setprecision(6)<<x1<<endl;
cout<<setprecision(6)<<x2<<endl;

}
int main()
{
fast_io;
//cases;
solve();
}