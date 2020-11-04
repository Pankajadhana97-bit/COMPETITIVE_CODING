#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
/*--------------------------------------------------------------------*/
using namespace std;
void solve()
{
 string str1;
 string str2;
 bool flag=true;
 cin>>str1;
 cin>>str2;
 for(int i=0;i<str1.length();i++)
 {
     if(str1[i]!='?' && str2[i]!='?' )
     {
         if(str1[i]!=str2[i])
         {
             flag=false;
             break;
         }
     }
 }
 if(flag==true)
 cout<<"Yes"<<endl;
 else
 {
     cout<<"No"<<endl;
 }
 
}
int main() 
{ 
    fast_io;
    cases;
} 