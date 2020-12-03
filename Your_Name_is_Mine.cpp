#include<bits/stdc++.h>

/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define all(v)  v.begin(),v.end()
#define ll long long int
/* -------------------------------------------------------------------- */
using namespace std; 
void solve()
{
   string str1;
   string str2;
   cin>>str1>>str2;
   int count=0;
   int n=str2.length();
   int m=str1.length();
    for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       if(str1[i]==str2[j])
       count++;
   }
   if(count>=str1.length())
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;
}
int main() 
{ 
    fast_io;
     cases;
} 