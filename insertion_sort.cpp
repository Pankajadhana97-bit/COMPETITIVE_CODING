#include <iostream> 
using namespace std; 
  
void solve()  
{  
    int n; 
    cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++)cin>>arr[i];
    int value,j;  
    for (int i = 1; i < n; i++) 
    {  
        value=arr[i];  
        j=i-1;
  
        while (j >= 0 && arr[j] > value) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = value;  
    } 
    for (int i=0;i<n;i++)  
        cout <<arr[i]<<" ";  
         cout<<endl; 
}   
int main()  
{  
    solve();  
    return 0;  
}  