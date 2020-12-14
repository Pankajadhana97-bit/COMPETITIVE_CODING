#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<cmath>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    for(ll k=0;k<n;k++)
    {
        string s;
        cin>>s;
        set<string>st;
        for(ll i=0;i<s.size();i++)
        {
            string str="";
            for(ll j=i;j<s.size();j++)
            {
                str+=s[j];
                st.insert(str);
            }
        }
        vector<string>v(st.begin(),st.end());
        ll count=0;
        for(ll i=0;i<v.size();i++)
        {
            ll cnt=0;
            string str=v[i];
            for(ll l=0;l<str.size();l++)
                if(str[l]=='1')
                    cnt++;
            if(cnt%2==0)
            {
                reverse(str.begin(),str.end());
                for(ll j=i+1;j<v.size();j++)
                {
                    if(str==v[j])
                        count++;
                }
            }
        }
        cout<<v.size()-count<<endl;
    }
    return 0;
}