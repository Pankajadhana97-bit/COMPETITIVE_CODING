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
int n;
int l[1000], r[100];

void solve()
{
//code here
 cin >> n;
    assert(1<=n && n<=100);
    for (int i=1; i<=n; i++) {
        cin >> l[i];
        assert(1<=l[i] && l[i]<=100);
    }
    for (int i = 1; i<=n; i++) {
        cin >> r[i];
        assert(1<=r[i] && r[i] <= 100);
    }
    int best = -1, bestr = -1, who = -1;
    for (int i = 1; i <= n; i++) {
        if ( l[i]*r[i] > best || (l[i]*r[i] == best && r[i] > bestr) ) {
            who = i;
            best = l[i]*r[i];
            bestr = r[i];
        }
    }
    cout << who << "\n";

}
int main()
{
fast_io;
cases;
}