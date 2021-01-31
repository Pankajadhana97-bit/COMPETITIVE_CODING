#include<iostream>
using namespace std;
const int N=1e5+10;
int parent[N];
int Rank[N];

int find(int a){
    if(a==parent[a])
    return a;
    return parent[a]=find(parent[a]);
}

void connect(int a,int b){
    a=find(a);
    b=find(b);
    if(a==b)return;
    if(Rank[a]>Rank[b]){
    parent[b]=a;
    Rank[a]+=Rank[b];
    }
    else{
     parent[a]=b;
     Rank[b]+=Rank[a];
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        parent[i]=i;
        Rank[i]=1;
    }
    while(m--){
        int a,b;
        cin>>a>>b;
        connect(a,b);
    }
    for(int i=1;i<=n;i++){
        int par=find(i);
        cout<<Rank[par]-1<<" ";
    }
}