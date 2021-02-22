#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	for(auto &x:v){
		cin>>x;
	}
	sort(v.begin(),v.end());
	if(k==1){
		cout<<0<<endl;
		return;
	}
	vector<int>res;
	for(int i=0;i<n;i++){
		int idx=k-1+i;
		if(idx>=n)break;
		int val=v[k+i-1]-v[i];
		res.push_back(val);	
	}
	cout<< *min_element(res.begin(),res.end())<<endl;
}
signed main(){
	int T;
	cin>>T;
	while(T--){
		solve();
	}
  cerr<<"Time elapsed : "<<1.0*clock()/CLOCKS_PER_SEC<<" sec\n";
}