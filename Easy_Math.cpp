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
//code here

        int n;
        cin>>n;

        vector<int> arr;
        arr.resize(n);

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        vector<int> max_arr;

        int x=0;
        for(int i=0; i<arr.size(); i++)
        {
            for(int j=i+1; j<arr.size(); j++)
            {
                int prod = arr[j]*arr[i];
                int temp, sumVal{0};
                while(prod!=0)
                {
                    temp = prod%10;
                    sumVal += temp;
                    prod = prod/10;
                }
                max_arr.resize(x+1);
                max_arr[x] = sumVal;
                x++;
            }
        }

        sort(max_arr.begin(), max_arr.end());
        cout<<max_arr[max_arr.size()-1]<<endl;
}
int main()
{
fast_io;
cases;
}