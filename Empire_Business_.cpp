#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k=1;
	    cin>>n;
	    vector<long long int>v(n+1);
	    for(long long int i=1;i<=n;i++)
	        cin>>v[i];
	    vector<long long int>res(n+1);
	    for(long long int i=1;i<=n;i++)
	    {
	        long long int min=INT_MAX; 
	        for(long long int j=1;j<=n;j++)
	        {
	            if(i==j)
	            {
	                if(v[i]<min)
	                    min=v[i];
	            }
	            else
	            {
	                long long int sum=v[j]+abs(i-j);
	                if(sum<min)
	                    min=sum;
	            }
	        }
	        res[k++]=min;
	    }
	   for(long long int i=1;i<=n;i++)
	        cout<<res[i]<<" ";
	    cout<<endl;
	}
	return 0;
}