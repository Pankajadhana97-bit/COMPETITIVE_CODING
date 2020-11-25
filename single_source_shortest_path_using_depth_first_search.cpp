/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
vector<int> arr[1001];
int visited[1001];
int dist[1001];
void dfs(int node ,int data)
{
     visited[node]=1;
     dist[node]=data;
     for(auto kid :arr[node])
     {
         if(visited[node]==0)
         dfs(kid,dist[node]+1);
     }

}
 int main()
 {
   int n;
   cin>>n;
   for(int i=1;i<=n-1;i++)
   {
       int a,b;
       cin>>a>>b;
       arr[a].push_back(b);
       arr[b].push_back(a);
   }
   dfs(1,0);
   int queries;
   cin>>queries;
   int count=-1;
   int min_dist=INT_MAX;
   while(queries--)
   {
       int val;
       cin>>val;
       if(dist[val]<min_dist)
       min_dist=dist[val] ,count=val;

       else
       {
        if(dist[val]==min_dist && val<count)
        count=val;
       }
   }
   cout<<count<<endl;
   return 0;
 }