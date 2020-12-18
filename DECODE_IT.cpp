#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll k;
	    cin>>k;
	    string ch[]={"A","12","ABC","1234","ABCDE","ABCDEFG","123456","ABCDEFGHI","12345678","ABCDEFGHIJK","1234567891","ABCDEFGHIJKLM","123456789123","ABCDEFGHIJKLMNO","12345678912345","ABCDEFGHIJKLMNOPQ","1234567891234567","ABCDEFGHIJKLMNOPQRS","123456789123456789","ABCDEFGHIJKLMNOPQRSTU","12345678912345678912","ABCDEFGHIJKLMNOPQRSTUVW","1234567891234567891234","ABCDEFGHIJKLMNOPQRSTUVWXY","123456789123456789123456","ABCDEFGHIJKLMNOPQRSTUVWXYZA","12345678912345678912345678"};
	    for(ll i=0;i<k;i++)
	    {
	        for(ll j=k-1;j>i;j--)
	            cout<<" ";
	        cout<<ch[i]<<endl;
	    }
	    //cout<<ch.size();
	}
	return 0;
}
