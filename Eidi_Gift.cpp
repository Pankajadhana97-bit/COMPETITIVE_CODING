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
void solve()
{
    int arr[3];
    int karr[3];
    int value=10000000;
    bool flag=true;
    for(int i=0;i<3;i++)cin>>arr[i];
    for(int j=0;j<3;j++)cin>>karr[j];
   for(int i=0;i<3;i++)
	    {
	        for(int j=i+1;j<3;j++)
	        {
	            if(arr[i]>arr[j]&&karr[i]>karr[j])value--;
	            else if(arr[i]==arr[j]&&karr[i]==karr[j])value--;
	            else if(arr[i]<arr[j]&&karr[i]<karr[j])value--;
	            else
	            {
                    flag=false;
                    break;
                }
	        }
        }
	    if(flag==false)
	    cout<<"NOT FAIR"<<endl;
	    else
	    cout<<"FAIR"<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 