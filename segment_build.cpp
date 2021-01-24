#include<bits/stdc++.h>
using namespace std;
int arr[100001];
int tree[400004];
int getmid(int start,int end)
{
    return (start+end)/2;
}
void buildtree(int start,int end,int ind)
{
	    if(start==end)
	    {
		tree[ind]=arr[start];
	    return;
	    }
	int mid=getmid(start,end);
	buildtree(start,mid,2*ind+1);
	buildtree(mid+1,end,2*ind+2);
	tree[ind]= max(tree[2*ind+1],tree[2*ind+2]);   
}
int query(int start,int end,int ind,int l,int r)
{
	if(start>=l and end<=r)//if the query is completely inside then simply we have return index value ie->tree[0];
		return tree[ind];
    if(end<l or start>r)//simply outside the range 
    	return INT_MIN;
    int mid=getmid(start,end); //mid function 
    int left=query(start,mid,2*ind+1,l,r);
    int right=query(mid+1,end,2*ind+2,l,r);
    return max(left,right);
}
 
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i]; 
	buildtree(0,n-1,0);
    int q;cin>>q;
    while(q--){
    	int l;cin>>l;
    	int r;cin>>r;
    	cout<<query(0,n-1,0,l,r);
    }
}