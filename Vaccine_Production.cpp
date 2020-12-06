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
  int day1,val1,day2,val2,p;
  int cnt=0,i;
  cin>>day1>>val1>>day2>>val2>>p;
  if(day1==day2)
  {
    for(i=1;i<1000;i++)
    {
    cnt++;
      if(i*(val1+val2)>=p)
      break;
    }
    cout<<cnt+min(day1,day2)-1<<endl;
  }
  if(day1!=day2)
  {
      int value=0;
      cnt=min(day1,day2)-1;
      for(i=min(day1,day2);i<max(day1,day2);i++)
      {
          cnt++;
          if(min(day1,day2)==day1)
          value+=val1;
          else
          value+=val2;
      }
      for(i=max(day1,day2);i<1000;i++)
      {
          cnt++;
          value+=(val1+val2);
          if(value>=p)
          break;
      }
      cout<<cnt<<endl;
  }
}
int main() 
{ 
    fast_io;
     //cases;
     solve();
} 