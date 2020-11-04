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
  string  str;
  cin>>str;
  if(str=="A" || str=="a")
  cout<<"Vowel"<<endl;
   else if(str=="E" || str=="e")
  cout<<"Vowel"<<endl;
   else if(str=="I"  ||str=="i")
  cout<<"Vowel"<<endl;
   else if(str=="O" || str=="o")
  cout<<"Vowel"<<endl;
   else if(str=="U" || str=="u")
  cout<<"Vowel"<<endl;
  else
  {
      cout<<"Consonant"<<endl;
  }
  

}
int main() 
{ 
    fast_io;
    //cases;
    solve();
} 