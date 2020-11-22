#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t=1;cin>>t; while(t--) { solve();} return 0
#define ll int64_t
/*--------------------------------------------------------------------*/
using namespace std;
int findMaxGCD(int arr[], int n) 
{ 
    // Calculating MAX in array 
    int high = 0; 
    for (int i = 0; i < n; i++) 
        high = max(high, arr[i]); 
  
    // Maintaining count array 
    int count[high + 1] = {0}; 
    for (int i = 0; i < n; i++) 
        count[arr[i]]++; 
  
    // Variable to store the 
    // multiples of a number 
    int counter = 0; 
  
    // Iterating from MAX to 1 
    // GCD is always between 
    // MAX and 1. The first 
    // GCD found will be the 
    // highest as we are  
    // decrementing the potential 
    // GCD 
    for (int i = high; i >= 1; i--) 
    { 
        int j = i; 
       counter = 0; 
    
        // Iterating from current 
        // potential GCD 
        // till it is less than 
        // MAX 
        while (j <= high) 
        { 
            // A multiple found 
  
            if(count[j] >=2) 
               return j; 
  
           else if (count[j] == 1)          
                counter++;          
  
            // Incrementing potential 
            // GCD by itself 
            // To check i, 2i, 3i.... 
            j += i; 
  
            // 2 multiples found, 
            // max GCD found 
            if (counter == 2)          
                return i; 
        } 
    } 
} 
  
void solve()
{
  int n,d;
  cin>>n>>d;
  int arr[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  while(d--)
  {
      int num;
      cin>>num;
      if(num==1)
      {
          int x,y;
          cin>>x>>y;
          arr[x]=y;
      }
      if(num==2)
      {
         cout<<findMaxGCD(arr, n)<<endl;
      }
  }
}
int main() 
{ 
    fast_io;
    cases;
} 