#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/
/* Defined values----------------------------------------------------  */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases long long int t=1;cin>>t; while(t--) { solve();} return 0
#define ll long long int
#define vec vector<int>
#define deb(x) cout << #x << x << endl;
#define all(v) v.begin(),v.end()
#define pi 3.1415926535897932384626433832795
/* -------------------------------------------------------------------- */
using namespace std;
const int N=1e3;
int parent[N];
int Rank[N];
int find(int a){
    if(a==parent[a])
    return a;
    return parent[a]=find(parent[a]);
}
void connect(int a,int b){
    if(Rank[a]<Rank[b])
    swap(a,b);
    parent[b]=a;
    if(Rank[a]==Rank[b]){
        Rank[a]++;
    }
}
void solve()
{
int n,m;
cin>>n>>m;
for(int i=1;i<=n;i++){
    parent[i]=i;
}
while(m--){
    int a,b;
    cin>>a>>b;
    a=find(a);
    b=find(b);
    if(a!=b){
        connect(a,b);
     }
    }
    unordered_set<int>s;
    for(int i=1;i<=n;i++){
        s.insert(parent[i]);
   }
   cout<<s.size()<<endl;
}
int main()
{
fast_io;
//cases;
solve();
}