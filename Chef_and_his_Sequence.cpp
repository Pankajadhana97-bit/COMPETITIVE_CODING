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
//code here
//the above representation is  two pointer technique representation used to calculate max pair sum or to find a subarry as per my knowledge
 int n;
 int m;
 cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cin>>m;
	    int b[m];
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	    }
	   int  j=0;
	    for(int i=0;i<n;i++){
	       if(b[j]==a[i]){
	           j++;
	       }
	       if(j==m)
	         break;
	    }
	    if(j==m)
	       cout<<"Yes\n";
	    else
	      cout<<"No\n";
	      
}
int main()
{
fast_io;
cases;
}