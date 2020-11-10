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
 int n,k; cin>>n>>k;
  string s; cin>>s;
  k++;
  queue<int>iron;
  queue<int>mag;
  int condition = 0;
  int result = 0;
  map<int,int>mp;

  for(int i=0;i<n;i++){
    if(s[i] == 'I'){
      iron.push(i);
      mp[i] = condition;
      if(mag.empty())
        continue;
      while(!mag.empty()){
        int a = mag.front();
        if(k-abs(a-i)-abs(mp[i]-mp[a])>0){
          result++;
          mag.pop();
          iron.pop();
          break;
          }
        mag.pop();

      }
    }

    if(s[i] == 'M'){
      mag.push(i);
      mp[i] = condition;
      if(iron.empty())
        continue;
      while(!iron.empty()){
        int a = iron.front();
        if(k-abs(a-i)-abs(mp[i]-mp[a])>0){
          result++;
          iron.pop();
          mag.pop();
          break;
          }
        iron.pop();
      }
    }

    if(s[i] == ':'){
      condition++;
      mp[i] = condition;
    }

    if(s[i] == 'X')
    {
      queue<int>tmp;
      mag = tmp;
      iron = tmp;
    }
    if(s[i] == '_')
    {
      mp[i] = condition;
    }
  }
  cout<<result<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 