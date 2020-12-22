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
string s;
  cin>>s;
  int p = s.length();
  int n;
  cin>>n;
  while(n--) {
  	string k;
  	cin>>k;
  	int q = k.length();
  	int a[q] = {0};
  	for(int i =0; i<q; i++) {
  		for(int j = 0; j<p; j++) {
  			if(k[i] == s[j]) a[i]++;
  		}
  	}
  	bool b = false;
  	for(int i =0; i<q; i++) {
  		if(a[i]==0) {
  			b = true;
  			break;
  		}
  	}
  	cout<<((b)?"Yes":"No")<<endl;
  }
}
int main()
{
fast_io;
//cases;
solve();
}