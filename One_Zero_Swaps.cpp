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
{
 int n;
 cin>>n;
 string a;
 string b;
 cin>>a>>b;
 int count=0;
 bool flag=true;
 for(int i=0;i<n;i++){
	 count+=a[i]-'0';
	 count-=b[i]-'0';
	 if(count<0){
	 cout<<"No"<<endl;
	 return;
	 }
 }
 if(count==0)
 cout<<"Yes"<<endl;
 else cout<<"No"<<endl;

}
int main()
{
fast_io;
cases;
}