#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        while(true){
        int x;
        cin>>x;
        v.push_back(x);
        char c=getchar();
        if(c != ' ') break;
    }
    sort(v.begin(),v.end());
    int n=v.size()-1;
    if(v[n]==n)
    cout<<v[n-1]<<endl;
    else cout<<v[n]<<endl;
    }
}