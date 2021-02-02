#include<bits/stdc++.h>
using namespace std;
#define int long long
int arr[1000][1000];
void floyd(int n,int m){
	for(int k=0;k<=n;k++){
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				if(arr[k][j] < INT_MAX and arr[i][k] < INT_MAX )
              arr[i][j]=min(arr[i][i],arr[k][j]+arr[i][k]);
			}
		}
	}
}
signed main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
             arr[i][j]=INT_MAX;
		}
	}
	while(m--){
		int a,b,w;
		cin>>a>>b>>w;
		arr[a][b]=w;
	}
	floyd(n,m);
	int src,dest;
	cin>>src>>dest;
	cout<<arr[src][dest]<<endl;
	return 0;
}