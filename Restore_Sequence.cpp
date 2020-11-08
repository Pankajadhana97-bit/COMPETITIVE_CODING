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
  long long int num;
  cin>>num;
  long long int first[num];
  long long int second[num];
  long long int value=1000;
  for (long long int i = 0; i < num; i++)cin>>second[i];
  for (long long int i = 0; i < num; i++)first[i]=1;
  for(long long int j=0;j<num;j++)
  {
      if(first[j]==1)
      {
          first[j]=value;
      }
      if(second[j]-1 != j)
      {
      first[second[j]-1]=(value)*first[second[j]-1];
      }
      value--;
  }
  for (long long int i = 0; i < num; i++)cout<<first[i]<<" ";
  cout<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 