    #include<bits/stdc++.h>
    /*
    Pankaj Adhana
    Panjab university;
    */
    /* Defined values----------------------------------------------------  */
    #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    #define cases  int t=1;cin>>t; while(t--) { solve();} return 0
    #define ll long long int
    #define vec vector<ll>
    #define all(v) v.begin(),v.end()
    #define pi 3.14159265358993
    /* -------------------------------------------------------------------- */
    using namespace std;
    void solve()
    {
    string s; cin>>s;
    int n = s.size();
    if(n%2!=0){
    cout<<-1<<endl;
    return;
    }
    int count1=0,count0=0;
    for(int i=0;i<n;i++){
    if(s[i]=='1')
    count1++;
        else
    count0++;
    }
    if(count1!=0&&count0!=0){
    int cnt = abs(count1-count0);
        cout<<cnt/2<<endl;
    }
    else
    cout<<"-1"<<endl;
    }
    int main()
    {
    fast_io;
    cases;
    }