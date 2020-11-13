#include<bits/stdc++.h>
#define  ll long long int 
using namespace std;
#define M 1000000007

void solve(){
 
 ll n; cin>>n;
 vector<ll>arr(n);
 vector<ll>temp(n);
 for(int i=0;i<n;i++)
  cin>>arr[i];

 ll result_count = 0;
 bool flag =false;
 
 if(arr[0] == 1 && n>1)
  flag = true;
 else{

  for(int i=0;i<n-1;i++){
   if(arr[i]==1){
    if(arr[i-1]&1==1)
     temp[i] = temp[i-1];
    else
     temp[i] = temp[i-1] +1;

   }
   else if(arr[i+1]==1 && i<n-2){
    if(arr[i]&1==1){
     result_count += arr[i];
     temp[i] = result_count;
    }
    else{
     temp[i] = result_count + arr[i];
     result_count += arr[i] - 1;
    }
   }
   else if(arr[i]&1==1){
    temp[i] = result_count + arr[i];
    result_count += arr[i] - 1;
   }
   else{
    result_count += arr[i];
    temp[i] = result_count;
   }
  }
  if(arr[n-1]&1==1){
   result_count += arr[n-1];
   temp[n-1] = result_count;
  }
  else{
   temp[n-1] = result_count + arr[n-1];
   result_count += arr[n-1] - 1;

  }
 }

 ll q; cin>>q;
 while(q--){
  ll r; cin>>r;
  ll div = r/n;
  ll rem = r%n;

  if(flag == true){
   if(div==0&&rem==1){
    cout<<1<<"\n"; 
    continue;
   }
   if(rem>1){
    ll ans = (div+1)%M;
    cout<<ans<<"\n";
   }
   else{ ll ans = div%M;
    cout<<ans<<"\n";
   }
   continue;
  }
  if(div == 0)
   cout<<temp[rem-1]%M<<"\n";
  else{
   if(rem == 0){
    ll ans = (((div - 1)*result_count) + temp[n-1])%M;
    cout<<ans<<"\n";
   }
   else{
    ll ans  = (((div)*result_count) + temp[rem-1])%M;
    cout<<ans<<"\n";
   }
  }
 }

}

int main(){
 ios::sync_with_stdio(false);
 cin.tie(0); cout.tie(0);

 //#ifndef ONLINE_JUDGE 
     //freopen("input.txt", "r", stdin); 
     //freopen("output.txt", "w", stdout);
 //#endif
 
 ll t; cin>>t;
 
 while(t--)
  solve();

    return 0;
}