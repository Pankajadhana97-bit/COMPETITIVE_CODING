#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int 
#define pi 3.14159265358993
#define mod (int)1e9
#define mod7 (int)1e7
/* -------------------------------------------------------------------- */
using namespace std;
void solve()
{
   	string s;
   		cin>> s;

   		string op = "";
   		int len = s.length();

   		bool fl = 1;

   		while(fl)
   		{
   			int i = 0;
   			bool found = 0;
   			while(i<=len-1){
   				if(i <= len - 3 && s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'c')
   					{
   						i=i+2;
   						found = 1;
   					}
   				else op += s[i];

   				i++;
   			}

   			if(found == 0)break;
   			s = op;
   			op = "";
   			len = s.length();

   		}

   		cout << s <<endl;
   	}
 
int main() 
{ 
    fast_io;
    cases;
} 