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
    double  a , b;
    string c;
    cin >> a >> b >> c;
    std::cout << std::fixed;
    std::cout << std::setprecision(6);
    if (c == "+")
    {
        cout << a + b << endl;
    }
    else if (c == "-")
    {
        cout << a - b << endl;
    }
    else if (c == "*")
    {
        cout << a * b << endl;

    }
    else if (c == "/")
    {
        std::cout << a/b << endl;
    }
}
int main()
{
fast_io;
//cases;
solve();
}